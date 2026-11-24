# Goemon64Recomp-NX

## What it is

Goemon64Recomp-NX is an unofficial Nintendo Switch homebrew port of
[Mystical Ninja Starring Goemon](https://en.wikipedia.org/wiki/Mystical_Ninja_Starring_Goemon)
(N64, NTSC-U). The game's MIPS is translated to C ahead of time by
[N64Recomp](https://github.com/N64Recomp/N64Recomp), the N64 system it runs on is
reimplemented natively by [N64ModernRuntime](https://github.com/klorfmorf/N64ModernRuntime)
(`goemon-patches`), and graphics are drawn with [GLideN64](https://github.com/gonetz/GLideN64)
on Mesa/EGL OpenGL. There is no CPU emulation.

It is a port of the PC project [Goemon 64: Recompiled](https://github.com/klorfmorf/Goemon64Recomp).
The game code is the same; what changes is everything around it: GLideN64 instead of RT64
(Vulkan / D3D12 / Metal), the Horizon OS layer, and the threading model. RmlUi, live recomp,
and mods are not in this tree.

**This repository and its releases do not contain a ROM or other game assets.** You supply
the original USA cart dump.

## What you need

- **A Switch running custom firmware** (Atmosphère) with the Homebrew Menu.
- **Your own Mystical Ninja Starring Goemon (USA) dump.** It is the only version accepted.

| Check | Value |
|---|---|
| Region / serial | USA, `NG5E` |
| Internal name | `MYSTICAL NINJA` |
| Compressed dump size | 16 MiB |
| SHA-256 (`.z64`, big-endian) | `1603be37427a33548857fc3d2e8867ede71121c353fb631b79b44f1d94845d80` |
| SHA-1 (same `.z64`) | `df8083a54296b8c151917c5333e1c85f014a2a66` |
| XXH3 (what the NRO checks) | `0xDB1BC7EE0E6BEBA1` |

To check a `.z64` dump:

```bash
# Linux
sha256sum "Mystical Ninja Starring Goemon (USA).z64"

# macOS
shasum -a 256 "Mystical Ninja Starring Goemon (USA).z64"
```

```bat
REM Windows
certutil -hashfile "Mystical Ninja Starring Goemon (USA).z64" SHA256
```

The SHA-256 and SHA-1 above are for the **big-endian `.z64`**. Dumps named `.n64` or `.v64`
are the same game with swapped bytes, so their hashes differ; the first boot converts them.
Do **not** use the ~32 MiB decompressed image from PC codegen (`mnsg.z64`,
`mnsg.us.decompressed.z64`). LZKN64 decompression runs in RAM on every boot.

The SHA-1 is the dump [Goemon 64: Recompiled](https://github.com/klorfmorf/Goemon64Recomp)
documents. The NRO itself verifies **XXH3**, not SHA-256.

## Install on the Switch

### Copy the files

Create `sdmc:/switch/goemon64recomp-nx/` on the SD card. Copy `goemon64recomp-nx.nro` and
your dump into that folder (the ROM's file name does not matter). The card should look like
this:

```
sdmc:/switch/goemon64recomp-nx/
├── goemon64recomp-nx.nro     # you copy this
├── <any-name>.z64            # original USA dump (not the 32 MiB decompressed file)
└── (created by the game)
    ├── mnsg.us.z64           # canonical copy, written on first boot
    ├── nx_options.txt
    ├── saves/
    │   └── mnsg.us.bin
    ├── shaders/
    └── goemon64.log
```

Put the SD card in the computer (or mount it over USB with hekate's *Tools → USB Tools →
SD Card*) and copy the files.

If you already played an earlier build from `sdmc:/switch/goemon64/`, **move** that folder
(NRO, `mnsg.us.z64`, `saves/`, `nx_options.txt`, `shaders/`) to
`sdmc:/switch/goemon64recomp-nx/`. This build does not read the old path.

### First boot

At the first start the dump is validated (internal name + XXH3) and stored as `mnsg.us.z64`
in the same folder. Later boots use that copy. A wrong version logs
`wrong version / not NTSC-U` and exits without crashing. Shader cache, saves, and
`nx_options.txt` are created as needed.

### Start the game

Open the Homebrew Menu **in title / application mode**: from the HOME menu, **hold R**
while launching any installed game, then pick **Goemon 64: Recompiled**.

Launching from the Album (applet mode) only gets about 400 MB. This port allocates
**512 MiB** of RDRAM, so applet mode will not run.

### Saves, settings and updates

- Saves: `sdmc:/switch/goemon64recomp-nx/saves/mnsg.us.bin` (128 KiB Controller Pak, the
  same `.bin` as the PC port). Copy the `saves/` folder either way to move slots between
  Switch and PC. A second flush also leaves `mnsg.us.bin.bak`.
- Settings from NX Options: `nx_options.txt`, written when the menu closes, and also before
  Quit or Restart.
- To update, replace only `goemon64recomp-nx.nro`. Saves, settings, and the stored ROM stay.
- Each run writes `goemon64.log`; the previous run is kept as `goemon64.prev.log`. A Horizon
  data abort is dumped to `goemon64.crash.log` plus a breadcrumb trail in `goemon64.trace.log`.

### Troubleshooting

- **"No valid NTSC-U dump"** / `wrong version / not NTSC-U`: the ROM must be in
  `sdmc:/switch/goemon64recomp-nx/` and be the USA version in the table above. Check the
  SHA-256 of the `.z64`. Do not use the 32 MiB decompressed codegen ROM.
- **Crash or black screen at the start**: make sure the Homebrew Menu was opened in title
  mode (hold **R** while starting a game), not from the Album.
- Logs: attach `goemon64.log` and `goemon64.prev.log` when you open an issue.

## Controls

Joy-Con and Pro Controller use Nintendo **button labels**
(`SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS=1`): physical **A** is N64 A, not the south face.
Pad 0 always reports connected. **Face Buttons** in NX Options can swap A/B **in the game
only**; the menu keeps Nintendo labels.

| Switch | N64 | In Goemon |
|---|---|---|
| A / B | A / B | jump / attack |
| ZL (trigger ≥ 0.5) | Z | crawl |
| L | L | unused in vanilla; kept for mods |
| R **or** ZR | R | camera: hold R and tilt the right stick (C) |
| Plus | Start | **pause — does not exit** |
| Left stick | analog | move; circular deadzone; Y inverted so up is up |
| Right stick ≥ 0.5 | C-Left / C-Right / C-Up / C-Down | **C-Up = magic**, **C-Down = character**, **C-Left = weapon**, **C-Right = map** |
| D-pad | D-pad | unused in vanilla; kept for mods |
| HOME | quit | the only way to leave the game; the save thread flushes on exit |
| Minus+Plus together | Start filtered | **NX Options**; the game sees a neutral pad until every button is up after close |

## Options

Press **Minus and Plus** together while playing to open **NX Options**. Plus alone still
pauses and does not open the menu. **B** backs out, then closes. Help / Quit / Restart /
Close sit on the top bar. Restart is enabled when the homebrew loader supports
`envSetNextLoad` (title override from the Homebrew Menu does). The game keeps running
(audio included); only the pad is held.

Volumes, camera, targeting, rumble, and the clock profile apply at once. Aspect ratio and
internal resolution apply on the next start (Restart in the menu, or HOME and relaunch).

| Section | What you'll find there |
|---|---|
| **Display** | **16:9** (default, fills the screen) or **4:3**; internal resolution **2×** (640×480, default) or **3×** (960×720) |
| **Overlays** | Show FPS |
| **Audio** | Master, music, and sound-effect volumes |
| **Performance** | Clock profile: Console Default, Docked GPU in Handheld (768 MHz GPU, the default), Horizon OC Docked Clocks, CPU Boost (1785 MHz, needs [Horizon OC](https://github.com/Horizon-OC/Horizon-OC)) |
| **Controls** | Targeting mode, camera invert, analog camera, rumble, Face Buttons |
| **Menu** | Orange or gray theme, opacity, size |

The game runs at its original **30 fps**. There is no 60 fps interpolation.

## Backlog

Planned work, in no particular order:

- Implement true widescreen
- On first launch, widescreen should be off by default
- Standardize A as jump and Y as attack
- Allow controller remapping
- Fix crash on reset
- Implement true 60 fps
- Optional: right analog stick moves the camera

## Building

Requirements on the host: **git**, **Docker** (and Compose). Nothing from devkitPro is
installed on your machine. The first `./scripts/build-nro.sh` builds image
`goemon64recomp-nx-switch-sdk:20260219` from [`docker/switch-sdk.Dockerfile`](docker/switch-sdk.Dockerfile)
(`devkitpro/devkita64:20260219` + `switch-sdl2`, `switch-mesa`, `switch-glad`, `switch-cmake`).

```bash
git clone <repository-url>
cd goemon64recomp-nx
git submodule update --init --recursive lib/N64ModernRuntime lib/GLideN64 lib/imgui
```

Compile the game:

```bash
./scripts/build-nro.sh
```

The script applies `switch/patches/{n64modernruntime,n64recomp,gliden64}.patch` and produces
`goemon64recomp-nx.nro`. The first run takes a while (SDK image); later runs reuse the cache.

The NRO lands at `build/switch/…/goemon64recomp-nx.nro` and is copied automatically to
`sdmc-staging/switch/goemon64recomp-nx/` on the host. From there, follow
[Install on the Switch](#install-on-the-switch): copy that `.nro` and your ROM onto the SD card.

Optional libnx / SDL / GL probe (not the game):

```bash
./scripts/build-nro.sh hello
```

That produces `goemon64_hello.nro`. Plus/Start exits the probe. It is only to validate
Docker, libnx, and SDL.

### Build notes

- Configuring CMake on the host without `Switch.cmake` is rejected; the PC RT64 binary is a
  different tree.
- `RecompiledFuncs/` and `RecompiledPatches/` are versioned in git on purpose. The Switch
  Docker image does not run N64Recomp and does not regenerate C from a ROM.
- After the first game build, `lib/GLideN64` and `lib/N64ModernRuntime` show as modified
  (the patches above were applied in place). That is expected; do not commit those submodule
  working trees.
- SDK shell: `./scripts/switch-sh`.

### nxlink (optional)

On the Switch: Homebrew Menu → **Y** (netloader). Title override is still required after
this probe. From the host:

```bash
./scripts/nxlink.sh -s                 # uses SWITCH_IP if set, else nxlink default
./scripts/nxlink.sh -a 192.168.1.50 -s
```

The wrapper enters the SDK container with `--network host` and streams stdout to the terminal
and `logs/nxlink-YYYYMMDD-HHMMSS.log` on the host. The same lines go to `goemon64.log` on
the SD card. After the run, if ftpd is open:

```bash
SWITCH_IP=192.168.15.5 ./scripts/pull-sd-logs.sh
```

## License

This port is **GPL-3.0**, like [Goemon 64: Recompiled](https://github.com/klorfmorf/Goemon64Recomp)
(`COPYING`). [GLideN64](https://github.com/gonetz/GLideN64) is licensed under **GPL version 2
only** (no "or later"). Those licenses are **not compatible inside one binary**. Combining
them is legally problematic; [DK64Recomp-NX](https://github.com/Trinalord777/DK64Recomp-NX)
documents the same issue and still ships that combination. This NRO **links** GLideN64.
Building from source for your own use is unaffected.

## Disclaimer

Independent fan project, not affiliated with or endorsed by Konami or Nintendo. Mystical
Ninja Starring Goemon, Nintendo 64, and Nintendo Switch are trademarks of their respective
owners. No game assets are included or distributed. Custom firmware and homebrew are used
at your own risk.
