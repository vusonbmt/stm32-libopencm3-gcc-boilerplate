#PROJECT SUMARY

![Travis](https://travis-ci.org/genuine-engineering/stm32-libopencm3-gcc-boilerplate.svg?branch=master)

# Installation

## Compiler

- Download and install GCC for ARM: https://launchpad.net/gcc-arm-embedded/+download
- Set ENV PATH for GCC

## Libopencm3

Clone `libopencm3` library and compile, set  `OPENCM3_DIR = /tools/stm32/libopencm3` in make file of this project

```
cd /tools/stm32
git clone https://github.com/libopencm3/libopencm3.git
cd libopencm3 && make
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
