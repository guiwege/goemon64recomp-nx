# Horizon homebrew SDK: devkitA64 + libnx + Mesa/SDL2 portlibs.
# Pin the base tag; do not COPY ROMs into the image.
FROM devkitpro/devkita64:20260219

ENV DEBIAN_FRONTEND=noninteractive \
    DEVKITPRO=/opt/devkitpro \
    GOEMON64_IN_CONTAINER=1 \
    GOEMON64_SWITCH_SDK=1

ENV PATH="${DEVKITPRO}/tools/bin:${DEVKITPRO}/devkitA64/bin:${DEVKITPRO}/portlibs/switch/bin:${PATH}"

# Host cmake/ninja drive Switch.cmake; portlibs supply SDL2 + Mesa/EGL/GL.
RUN apt-get update && apt-get install -y --no-install-recommends \
        cmake \
        ninja-build \
        pkg-config \
        ca-certificates \
        file \
    && rm -rf /var/lib/apt/lists/*

RUN dkp-pacman -Syu --noconfirm \
    && dkp-pacman -S --noconfirm --needed \
        switch-sdl2 \
        switch-mesa \
        switch-glad \
        switch-cmake \
        switch-pkg-config \
    && printf 'y\ny\n' | dkp-pacman -Scc

COPY switch-sdk-entrypoint.sh /usr/local/bin/goemon64-switch-entrypoint.sh
RUN chmod +x /usr/local/bin/goemon64-switch-entrypoint.sh \
    && printf '%s\n' '. /opt/devkitpro/switchvars.sh' > /etc/profile.d/devkit-goemon.sh \
    && printf '\n%s\n' '. /opt/devkitpro/switchvars.sh' >> /etc/bash.bashrc

WORKDIR /work
ENTRYPOINT ["/usr/local/bin/goemon64-switch-entrypoint.sh"]
CMD ["bash"]
