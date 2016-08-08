#PROJECT SUMARY

# Installation

## Trình biên dịch

- Tải và cài đặt GCC for ARM: https://launchpad.net/gcc-arm-embedded/+download
- Cấu hình ENV PATH 

## Libopencm3

Clone thư viện `libopencm3` và biên dịch, lưu ý, cần cung cấp đầy đủ đường dẫn do dự án. Trong ví dụ dưới đây, đường dẫn libopencm3 `OPENCM3_DIR = /tools/stm32/libopencm3`

```
cd /tools/stm32
git clone https://github.com/libopencm3/libopencm3.git
cd libopencm3 && make
```

## OpenOCD 

Tải về, cài đặt và cung cấp đường dẫn cho Makefile khi nạp sử dụng ST-Linkv2, 
Mặc định: `OPENOCD_DIR = "/Applications/GNU ARM Eclipse/OpenOCD/0.8.0-201503201802"` 

## Sử dụng

Biên dịch:

```
https://github.com/genuine-engineering/stm32-libopencm3-gcc-boilerplate.git
cd stm32-libopencm3-gcc-boilerplate && make
```

Nạp cho STM32 sử dụng ST-Linkv2, SWD, OpenOCD:

```
make flash
```

## Bản quyền: 

- Thư viện libopencm3 LGPL
-Toàn bộ phát sinh dự án mẫu giữ bản quyền CC-BY ![CC-BY](https://licensebuttons.net/l/by/3.0/88x31.png)
