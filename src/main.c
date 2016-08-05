#include "config.h"
#include <stdlib.h>
#include <string.h>

#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/cm3/nvic.h>
#include <libopencm3/stm32/gpio.h>
#include "debug.h"
#include "cdcacm.h"
#include "tick.h"

static void clock_init(void);
static void gpio_setup(void);

int main(void)
{
  uint32_t main_tick;
  clock_init();
  tick_init();

  gpio_set_mode(GPIOB, GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, GPIO6);
  main_tick = tick_get();
  while (1)
  {
    cdcacm_manage();
    if(tick_expire_ms(&main_tick, 1000)) {
      gpio_toggle(GPIOB, GPIO6);
    }
  }
}

static void clock_init(void)
{
  rcc_clock_setup_in_hse_8mhz_out_72mhz();
  rcc_periph_clock_enable(RCC_GPIOA);
  rcc_periph_clock_enable(RCC_GPIOB);
  rcc_periph_clock_enable(RCC_GPIOC);
  rcc_periph_clock_enable(RCC_GPIOD);
  //rcc_periph_clock_enable(RCC_USART2);
  rcc_periph_clock_enable(RCC_AFIO);
  rcc_periph_clock_enable(RCC_I2C2);
}
