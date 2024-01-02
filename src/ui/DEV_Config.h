#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_

#include <Wire.h>

/**
 * GPIOI config
 **/
#define DEV_SDA_PIN (6)
#define DEV_SCL_PIN (7)

#define Touch_INT_PIN (21)
#define Touch_RST_PIN (22)

/*------------------------------------------------------------------------------------------------------*/
void DEV_Delay_ms(uint32_t xms);
void DEV_Delay_us(uint32_t xus);

void DEV_I2C_Write_Byte(uint8_t addr, uint8_t reg, uint8_t Value);

uint8_t DEV_I2C_Read_Byte(uint8_t addr, uint8_t reg);

uint8_t DEV_Module_Init(void);
void DEV_Module_Exit(void);

#endif
