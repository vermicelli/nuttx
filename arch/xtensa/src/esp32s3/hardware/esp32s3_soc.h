/****************************************************************************
 * arch/xtensa/src/esp32s3/hardware/esp32s3_soc.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_XTENSA_SRC_ESP32S3_HARDWARE_ESP32S3_SOC_H
#define __ARCH_XTENSA_SRC_ESP32S3_HARDWARE_ESP32S3_SOC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#ifndef __ASSEMBLY__
#include <stdint.h>
#include <stdbool.h>
#endif

#include "xtensa_attr.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register Bits */

#define BIT31   0x80000000
#define BIT30   0x40000000
#define BIT29   0x20000000
#define BIT28   0x10000000
#define BIT27   0x08000000
#define BIT26   0x04000000
#define BIT25   0x02000000
#define BIT24   0x01000000
#define BIT23   0x00800000
#define BIT22   0x00400000
#define BIT21   0x00200000
#define BIT20   0x00100000
#define BIT19   0x00080000
#define BIT18   0x00040000
#define BIT17   0x00020000
#define BIT16   0x00010000
#define BIT15   0x00008000
#define BIT14   0x00004000
#define BIT13   0x00002000
#define BIT12   0x00001000
#define BIT11   0x00000800
#define BIT10   0x00000400
#define BIT9    0x00000200
#define BIT8    0x00000100
#define BIT7    0x00000080
#define BIT6    0x00000040
#define BIT5    0x00000020
#define BIT4    0x00000010
#define BIT3    0x00000008
#define BIT2    0x00000004
#define BIT1    0x00000002
#define BIT0    0x00000001

#define PRO_CPU_NUM (0)
#define APP_CPU_NUM (1)

#define PRO_CPUID   (0xcdcd)
#define APP_CPUID   (0xabab)

/* Largest span of contiguous memory (DRAM or IRAM) in the address space */

#define SOC_MAX_CONTIGUOUS_RAM_SIZE (SOC_EXTRAM_DATA_HIGH - SOC_EXTRAM_DATA_LOW)

#define DR_REG_UART_BASE                        0x60000000
#define DR_REG_SPI1_BASE                        0x60002000
#define DR_REG_SPI0_BASE                        0x60003000
#define DR_REG_GPIO_BASE                        0x60004000
#define DR_REG_GPIO_SD_BASE                     0x60004f00

#define DR_REG_FE2_BASE                         0x60005000
#define DR_REG_FE_BASE                          0x60006000

#define DR_REG_EFUSE_BASE                       0x60007000
#define DR_REG_RTCCNTL_BASE                     0x60008000
#define DR_REG_RTCIO_BASE                       0x60008400
#define DR_REG_SENS_BASE                        0x60008800
#define DR_REG_RTC_I2C_BASE                     0x60008C00
#define DR_REG_IO_MUX_BASE                      0x60009000

#define DR_REG_HINF_BASE                        0x6000B000
#define DR_REG_UHCI1_BASE                       0x6000C000

#define DR_REG_I2S_BASE                         0x6000F000
#define DR_REG_UART1_BASE                       0x60010000

#define DR_REG_BT_BASE                          0x60011000

#define DR_REG_I2C_EXT_BASE                     0x60013000
#define DR_REG_UHCI0_BASE                       0x60014000

#define DR_REG_SLCHOST_BASE                     0x60015000

#define DR_REG_RMT_BASE                         0x60016000
#define DR_REG_PCNT_BASE                        0x60017000

#define DR_REG_SLC_BASE                         0x60018000

#define DR_REG_LEDC_BASE                        0x60019000

#define DR_REG_NRX_BASE                         0x6001CC00
#define DR_REG_BB_BASE                          0x6001D000

#define DR_REG_PWM0_BASE                        0x6001E000
#define DR_REG_TIMERGROUP0_BASE                 0x6001F000
#define DR_REG_TIMERGROUP1_BASE                 0x60020000
#define DR_REG_RTC_SLOWMEM_BASE                 0x60021000
#define DR_REG_SYSTIMER_BASE                    0x60023000
#define DR_REG_SPI2_BASE                        0x60024000
#define DR_REG_SPI3_BASE                        0x60025000
#define DR_REG_SYSCON_BASE                      0x60026000
#define DR_REG_APB_CTRL_BASE                    0x60026000 /* Old name for SYSCON, to be removed */
#define DR_REG_I2C1_EXT_BASE                    0x60027000
#define DR_REG_SDMMC_BASE                       0x60028000

#define REG_SPI_BASE(i)                         (DR_REG_SPI2_BASE + (((i) > 3) ? ((((i) - 2) * 0x1000) + 0x10000) : (((i) - 2) * 0x1000)))

#define DR_REG_PERI_BACKUP_BASE                 0x6002A000

#define DR_REG_TWAI_BASE                        0x6002B000
#define DR_REG_PWM1_BASE                        0x6002C000
#define DR_REG_I2S1_BASE                        0x6002D000
#define DR_REG_UART2_BASE                       0x6002E000

#define DR_REG_USB_DEVICE_BASE                  0x60038000
#define DR_REG_USB_WRAP_BASE                    0x60039000
#define DR_REG_AES_BASE                         0x6003A000
#define DR_REG_SHA_BASE                         0x6003B000
#define DR_REG_RSA_BASE                         0x6003C000
#define DR_REG_HMAC_BASE                        0x6003E000
#define DR_REG_DIGITAL_SIGNATURE_BASE           0x6003D000
#define DR_REG_GDMA_BASE                        0x6003F000
#define DR_REG_APB_SARADC_BASE                  0x60040000
#define DR_REG_LCD_CAM_BASE                     0x60041000

#define DR_REG_USB_BASE                         0x60080000

#define DR_REG_SYSTEM_BASE                      0x600C0000
#define DR_REG_SENSITIVE_BASE                   0x600C1000
#define DR_REG_INTERRUPT_BASE                   0x600C2000

/* Cache configuration */

#define DR_REG_EXTMEM_BASE                      0x600C4000
#define DR_REG_MMU_TABLE                        0x600C5000
#define DR_REG_ITAG_TABLE                       0x600C6000
#define DR_REG_DTAG_TABLE                       0x600C8000

#define DR_REG_EXT_MEM_ENC                      0x600CC000

#define DR_REG_ASSIST_DEBUG_BASE                0x600CE000
#define DR_REG_WORLD_CNTL_BASE                  0x600D0000
#define DR_REG_DPORT_END                        0x600D3FFC

#define REG_UHCI_BASE(i)      (DR_REG_UHCI0_BASE - (i) * 0x8000)
#define REG_UART_BASE( i )    (DR_REG_UART_BASE + (i) * 0x10000 + ((i) > 1 ? 0xe000 : 0))
#define REG_UART_AHB_BASE(i)  (0x60000000 + (i) * 0x10000 + ((i) > 1 ? 0xe000 : 0 ))
#define UART_FIFO_AHB_REG(i)  (REG_UART_AHB_BASE(i) + 0x0)
#define REG_I2S_BASE( i )     (DR_REG_I2S_BASE + (i) * 0x1E000)
#define REG_TIMG_BASE(i)      (DR_REG_TIMERGROUP0_BASE + (i)*0x1000)
#define REG_SPI_MEM_BASE(i)   (DR_REG_SPI0_BASE - (i) * 0x1000)
#define REG_I2C_BASE(i)       (DR_REG_I2C_EXT_BASE + (i) * 0x14000)

/* Registers Operation */

#define ETS_UNCACHED_ADDR(addr) (addr)
#define ETS_CACHED_ADDR(addr) (addr)

#define BIT(nr)                 (1UL << (nr))

#ifndef __ASSEMBLY__

/* Write value to register */

#define REG_WRITE(_r, _v)    (*(volatile uint32_t *)(_r)) = (_v)

/* Read value from register */

#define REG_READ(_r) (*(volatile uint32_t *)(_r))

/* Get bit or get bits from register */

#define REG_GET_BIT(_r, _b)  (*(volatile uint32_t *)(_r) & (_b))

/* Set bit or set bits to register */

#define REG_SET_BIT(_r, _b)  (*(volatile uint32_t *)(_r) |= (_b))

/* Clear bit or clear bits of register */

#define REG_CLR_BIT(_r, _b)  (*(volatile uint32_t *)(_r) &= ~(_b))

/* Set bits of register controlled by mask */

#define REG_SET_BITS(_r, _b, _m) (*(volatile uint32_t *)(_r) = (*(volatile uint32_t *)(_r) & ~(_m)) | ((_b) & (_m)))

/* Get field from register,
 * used when _f is not left shifted by _f##_S
 */

#define REG_GET_FIELD(addr, field) ((getreg32(addr) >> (field##_S)) & (field##_V))

/* Set field to register,
 * used when _f is not left shifted by _f##_S
 */

#define REG_SET_FIELD(addr, field, val) (modifyreg32((addr), (field##_M), (((uint32_t) val) & (field##_V)) << (field##_S)))

/* Get field value from a variable,
 * used when _f is not left shifted by _f##_S
 */

#define VALUE_GET_FIELD(_r, _f) (((_r) >> (_f##_S)) & (_f))

/* Get field value from a variable,
 * used when _f is left shifted by _f##_S
 */

#define VALUE_GET_FIELD2(_r, _f) (((_r) & (_f))>> (_f##_S))

/* Set field value to a variable,
 * used when _f is not left shifted by _f##_S
 */

#define VALUE_SET_FIELD(_r, _f, _v) ((_r)=(((_r) & ~((_f) << (_f##_S)))|((_v)<<(_f##_S))))

/* Set field value to a variable,
 * used when _f is left shifted by _f##_S
 */

#define VALUE_SET_FIELD2(_r, _f, _v) ((_r)=(((_r) & ~(_f))|((_v)<<(_f##_S))))

/* Generate a value from a field value,
 * used when _f is not left shifted by _f##_S
 */

#define FIELD_TO_VALUE(_f, _v) (((_v)&(_f))<<_f##_S)

/* Generate a value from a field value,
 * used when _f is left shifted by _f##_S
 */

#define FIELD_TO_VALUE2(_f, _v) (((_v)<<_f##_S) & (_f))

/* Read value from register */

#define READ_PERI_REG(addr) (*((volatile uint32_t *)ETS_UNCACHED_ADDR(addr)))

/* Write value to register */

#define WRITE_PERI_REG(addr, val) (*((volatile uint32_t *)ETS_UNCACHED_ADDR(addr))) = (uint32_t)(val)

/* Clear bits of register controlled by mask */

#define CLEAR_PERI_REG_MASK(reg, mask) WRITE_PERI_REG((reg), (READ_PERI_REG(reg)&(~(mask))))

/* Set bits of register controlled by mask */

#define SET_PERI_REG_MASK(reg, mask)   WRITE_PERI_REG((reg), (READ_PERI_REG(reg)|(mask)))

/* Get bits of register controlled by mask */

#define GET_PERI_REG_MASK(reg, mask)   (READ_PERI_REG(reg) & (mask))

/* Get bits of register controlled by highest bit and lowest bit */

#define GET_PERI_REG_BITS(reg, hipos,lowpos)      ((READ_PERI_REG(reg)>>(lowpos))&((1<<((hipos)-(lowpos)+1))-1))

/* Set bits of register controlled by mask and shift */

#define SET_PERI_REG_BITS(reg,bit_map,value,shift) (WRITE_PERI_REG((reg),(READ_PERI_REG(reg)&(~((bit_map)<<(shift))))|(((value) & bit_map)<<(shift)) ))

/* Get field of register */

#define GET_PERI_REG_BITS2(reg, mask,shift)      ((READ_PERI_REG(reg)>>(shift))&(mask))

/* Extract the field from the register and shift it to avoid wrong reading */

#define REG_MASK(_reg, _field) ((_reg & (_field##_M)) >> (_field##_S))

/* Helper to place a value in a field */

#define VALUE_TO_FIELD(_value, _field) (((_value) << (_field##_S)) & (_field##_M))

#endif /* __ASSEMBLY__ */

/* Peripheral Clock */

#define  APB_CLK_FREQ_ROM                            (40*1000000)
#define  CPU_CLK_FREQ_ROM                            (40*1000000)
#define  UART_CLK_FREQ_ROM                           (40*1000000)
#define  EFUSE_CLK_FREQ_ROM                          (20*1000000)
#define  CPU_CLK_FREQ                                APB_CLK_FREQ
#define  APB_CLK_FREQ                                (80*1000000)
#define  REF_CLK_FREQ                                (1000000)
#define  RTC_CLK_FREQ                                (20*1000000)
#define  XTAL_CLK_FREQ                               (40*1000000)
#define  UART_CLK_FREQ                               APB_CLK_FREQ
#define  WDT_CLK_FREQ                                APB_CLK_FREQ
#define  TIMER_CLK_FREQ                              (80000000>>4)
#define  SPI_CLK_DIV                                 4
#define  TICKS_PER_US_ROM                            40
#define  GPIO_MATRIX_DELAY_NS                        0

/* Overall memory map */

#define SOC_DROM_LOW         0x3C000000
#define SOC_DROM_HIGH        0x3D000000
#define SOC_IROM_LOW         0x42000000
#define SOC_IROM_HIGH        0x44000000
#define SOC_IRAM_LOW         0x40370000
#define SOC_IRAM_HIGH        0x403E0000
#define SOC_DRAM_LOW         0x3FC88000
#define SOC_DRAM_HIGH        0x3FD00000

#define SOC_RTC_IRAM_LOW     0x600FE000
#define SOC_RTC_IRAM_HIGH    0x60100000
#define SOC_RTC_DRAM_LOW     0x600FE000
#define SOC_RTC_DRAM_HIGH    0x60100000

#define SOC_RTC_DATA_LOW     0x50000000
#define SOC_RTC_DATA_HIGH    0x50002000

#define SOC_EXTRAM_DATA_LOW  0x3D000000
#define SOC_EXTRAM_DATA_HIGH 0x3E000000
#define SOC_IROM_MASK_LOW    0x40000000
#define SOC_IROM_MASK_HIGH   0x4001A100

#define SOC_EXTRAM_DATA_SIZE (SOC_EXTRAM_DATA_HIGH - SOC_EXTRAM_DATA_LOW)

/* First and last words of the D/IRAM region, for both the DRAM address
 * as well as the IRAM alias.
 */

#define SOC_DIRAM_IRAM_LOW    0x40378000
#define SOC_DIRAM_IRAM_HIGH   0x403E0000
#define SOC_DIRAM_DRAM_LOW    0x3FC88000
#define SOC_DIRAM_DRAM_HIGH   0x3FCF0000

/* Region of memory accessible via DMA in internal memory.
 * See esp_ptr_dma_capable().
 */

#define SOC_DMA_LOW  0x3FC88000
#define SOC_DMA_HIGH 0x3FD00000

/* Region of memory accessible via DMA in external memory.
 * See esp_ptr_dma_ext_capable().
 */

#define SOC_DMA_EXT_LOW     SOC_EXTRAM_DATA_LOW
#define SOC_DMA_EXT_HIGH    SOC_EXTRAM_DATA_HIGH

/* Region of memory that is byte-accessible.
 * See esp_ptr_byte_accessible().
 */

#define SOC_BYTE_ACCESSIBLE_LOW     0x3FC88000
#define SOC_BYTE_ACCESSIBLE_HIGH    0x3FD00000

/* Region of memory that is internal, as in on the same silicon die as the
 * ESP32 CPUs (excluding RTC data region, that's checked separately.)
 * See esp_ptr_internal().
 */

#define SOC_MEM_INTERNAL_LOW        0x3FC88000
#define SOC_MEM_INTERNAL_HIGH       0x403E2000

/* Start (highest address) of ROM boot stack, only relevant during
 * early boot
 */

#define SOC_ROM_STACK_START         0x3fcebf10

/* Interrupt cpu using table, Please see the core-isa.h */

/****************************************************************************
 *  Intr num  Level  Type          PRO CPU usage        APP CPU usage
 *  0         1      extern level  WMAC                 Reserved
 *  1         1      extern level  BT/BLE Host HCI DMA  BT/BLE Host HCI DMA
 *  2         1      extern level
 *  3         1      extern level
 *  4         1      extern level  WBB
 *  5         1      extern level  BT/BLE Controller    BT/BLE Controller
 *  6         1      timer         FreeRTOS Tick(L1)    FreeRTOS Tick(L1)
 *  7         1      software      BT/BLE VHCI          BT/BLE VHCI
 *  8         1      extern level  BT/BLE BB(RX/TX)     BT/BLE BB(RX/TX)
 *  9         1      extern level
 *  10        1      extern edge
 *  11        3      profiling
 *  12        1      extern level
 *  13        1      extern level
 *  14        7      nmi           Reserved             Reserved
 *  15        3      timer         FreeRTOS Tick(L3)    FreeRTOS Tick(L3)
 *  16        5      timer
 *  17        1      extern level
 *  18        1      extern level
 *  19        2      extern level
 *  20        2      extern level
 *  21        2      extern level
 *  22        3      extern edge
 *  23        3      extern level
 *  24        4      extern level  TG1_WDT
 *  25        4      extern level  CACHEERR
 *  26        5      extern level
 *  27        3      extern level  Reserved             Reserved
 *  28        4      extern edge   DPORT ACCESS         DPORT ACCESS
 *  29        3      software      Reserved             Reserved
 *  30        4      extern edge   Reserved             Reserved
 *  31        5      extern level
 ****************************************************************************/

/* Core voltage needs to be increased in two cases:
 * 1. running at 240 MHz
 * 2. running with 80MHz Flash frequency
 */

#if defined(CONFIG_ESP32S3_FLASH_FREQ_80M) || defined(CONFIG_ESP32S3_FLASH_FREQ_120M)
#define DIG_DBIAS_80M_160M          RTC_CNTL_DBIAS_1V25
#else
#define DIG_DBIAS_80M_160M          RTC_CNTL_DBIAS_1V10
#endif
#define DIG_DBIAS_240M              RTC_CNTL_DBIAS_1V25
#define DIG_DBIAS_XTAL              RTC_CNTL_DBIAS_1V10
#define DIG_DBIAS_2M                RTC_CNTL_DBIAS_1V00

/* CPU0 Interrupt number reserved, not touch this. */

#define ETS_WMAC_INUM                           0
#define ETS_BT_HOST_INUM                        1
#define ETS_WBB_INUM                            4
#define ETS_TG0_T1_INUM                         10 /* use edge interrupt*/
#define ETS_FRC1_INUM                           22
#define ETS_T1_WDT_INUM                         24
#define ETS_CACHEERR_INUM                       25
#define ETS_DPORT_INUM                          28

/* CPU0 Interrupt number used in ROM, should be cancelled in SDK */

#define ETS_SLC_INUM                            1
#define ETS_UART0_INUM                          5
#define ETS_UART1_INUM                          5
#define ETS_SPI2_INUM                           1

/* CPU0 Interrupt number used in ROM code only when module init function
 * called, should pay attention here.
 */

#define ETS_FRC_TIMER2_INUM 10 /* use edge*/
#define ETS_GPIO_INUM       4

/* Other interrupt number should be managed by the user */

/* Invalid interrupt for number interrupt matrix */

#define ETS_INVALID_INUM                        6

#define MHZ (1000000)
#define RTC_PLL_FREQ_320M           320
#define RTC_PLL_FREQ_480M           480

#define DPORT_CPUPERIOD_SEL_80      0
#define DPORT_CPUPERIOD_SEL_160     1
#define DPORT_CPUPERIOD_SEL_240     2

#define DPORT_SOC_CLK_SEL_XTAL      0
#define DPORT_SOC_CLK_SEL_PLL       1
#define DPORT_SOC_CLK_SEL_8M        2

#define RTC_FAST_CLK_FREQ_8M        8500000

#ifndef __ASSEMBLY__

/****************************************************************************
 * Inline Functions
 ****************************************************************************/

/****************************************************************************
 * Name: esp32s3_sp_dram
 *
 * Description:
 *   Check if the stack pointer is in DRAM.
 *
 ****************************************************************************/

static inline bool IRAM_ATTR esp32s3_sp_dram(uint32_t sp)
{
  return (sp >= SOC_DRAM_LOW + 0x10 && sp < SOC_DRAM_HIGH - 0x10);
}

/****************************************************************************
 * Name: esp32s3_ptr_extram
 *
 * Description:
 *   Check if the buffer comes from the external RAM
 *
 ****************************************************************************/

static inline bool IRAM_ATTR esp32s3_ptr_extram(const void *p)
{
  return ((intptr_t)p >= SOC_EXTRAM_DATA_LOW &&
          (intptr_t)p < SOC_EXTRAM_DATA_HIGH);
}

/****************************************************************************
 * Name: esp32s3_ptr_iram
 *
 * Description:
 *   Check if the pointer is in IRAM
 *
 ****************************************************************************/

static inline bool IRAM_ATTR esp32s3_ptr_iram(const void *p)
{
  return ((intptr_t)p >= SOC_IRAM_LOW && (intptr_t)p < SOC_IRAM_HIGH);
}

/****************************************************************************
 * Name: esp32s3_ptr_exec
 *
 * Description:
 *   Check if the pointer is within an executable range.
 *
 ****************************************************************************/

static inline bool IRAM_ATTR esp32s3_ptr_exec(const void *p)
{
  intptr_t ip = (intptr_t)p;
  return (ip >= SOC_IROM_LOW && ip < SOC_IROM_HIGH)
      || (ip >= SOC_IRAM_LOW && ip < SOC_IRAM_HIGH)
      || (ip >= SOC_IROM_MASK_LOW && ip < SOC_IROM_MASK_HIGH)
#if defined(SOC_CACHE_APP_LOW) && !defined(CONFIG_SMP)
      || (ip >= SOC_CACHE_APP_LOW && ip < SOC_CACHE_APP_HIGH)
#endif
      || (ip >= SOC_RTC_IRAM_LOW && ip < SOC_RTC_IRAM_HIGH);
}

#endif /* __ASSEMBLY__ */

#endif /* __ARCH_XTENSA_SRC_ESP32S3_HARDWARE_ESP32S3_SOC_H */
