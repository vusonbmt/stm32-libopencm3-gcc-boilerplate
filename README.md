#PROJECT SUMARY
Build result and artifact on CircleCI [![CircleCI](https://circleci.com/gh/vusonbmt/stm32-libopencm3-gcc-boilerplate.svg?style=svg)](https://circleci.com/gh/vusonbmt/stm32-libopencm3-gcc-boilerplate)


# Installation
## Prerequisites

### For Ubuntu/Fedora:

- An `arm-none-eabi/arm-elf` toolchain.

### For Windows:

Download and install:

- `msys` - http://sourceforge.net/projects/mingw/files/MSYS/Base/msys-core/msys-1.0.11/MSYS-1.0.11.exe
- `arm-none-eabi/arm-elf` toolchain (for example this one https://launchpad.net/gcc-arm-embedded)
- Run msys shell and set the path without standard Windows paths, so Windows programs such as 'find' won't interfere:

```
export PATH="/c//Python27:/c/ARMToolchain/bin:/usr/local/bin:/usr/bin:/bin"
```


## OpenOCD 

Install and provide variable PATH for Makefile: `OPENOCD_DIR = "/Applications/GNU ARM Eclipse/OpenOCD/0.8.0-201503201802"` 

## Usage

Compile:

```
git clone https://github.com/genuine-engineering/stm32-libopencm3-gcc-boilerplate.git
cd stm32-libopencm3-gcc-boilerplate && make
```

Program STM32 using ST-Linkv2, SWD, OpenOCD:

```
make flash
```

## License: 

- libopencm3 LGPL
- This project CC-BY ![CC-BY](https://licensebuttons.net/l/by/3.0/88x31.png)
