#include "DEV_Config.h"

/**
 * I2C
 **/
void DEV_I2C_Write_Byte(uint8_t addr, uint8_t reg, uint8_t Value) {
  Wire1.beginTransmission(addr);
  Wire1.write(reg);
  Wire1.write(Value);
  Wire1.endTransmission();
}

uint8_t DEV_I2C_Read_Byte(uint8_t addr, uint8_t reg) {
  uint8_t value;

  Wire1.beginTransmission(addr);
  Wire1.write((byte)reg);
  Wire1.endTransmission();

  Wire1.requestFrom(addr, (byte)1);
  value = Wire1.read();

  return value;
}

/**
 * delay x ms
 **/
void DEV_Delay_ms(uint32_t xms) {
  delay(xms);
}

void DEV_Delay_us(uint32_t xus) {
  delayMicroseconds(xus);
}


/******************************************************************************
function:	Module Initialize, the library and initialize the pins, SPI protocol
parameter:
Info:
******************************************************************************/
uint8_t DEV_Module_Init(void) {
  DEV_Delay_ms(100);

  // I2C Config
  Wire1.setSDA(DEV_SDA_PIN);
  Wire1.setSCL(DEV_SCL_PIN);
  Wire1.setClock(400000);
  Wire1.begin();
  printf("DEV_Module_Init OK \r\n");
  return 0;
}

/******************************************************************************
function:	Module exits, closes SPI and BCM2835 library
parameter:
Info:
******************************************************************************/
void DEV_Module_Exit(void) {
  Wire1.end();
}
