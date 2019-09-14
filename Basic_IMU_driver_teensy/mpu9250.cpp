#include "mpu9250.h"

#define CS_PIN_ASSERT()
#define CS_PIN_DEASSERT()
#define SPI_READ_FLAG 0x80

void readRegisters(uint8_t addr, uint8_t * dst, int len)
{
  CS_PIN_ASSERT()
  SPI.transfer(addr | SPI_READ_FLAG);
  for (int i = 0; i < len; i++)
  {
    dst[i] = SPI.transfer(0xff);
  }
  CS_PIN_DEASSERT()
}

uint8_t readRegister(uint8_t addr)
{
  uint8_t ret;
  CS_PIN_ASSERT()
  SPI.transfer(addr | SPI_READ_FLAG);
  ret = SPI.transfer(0xff);
  CS_PIN_DEASSERT()
  return ret;
}

void writeRegisters(uint8_t addr, uint8_t * src, len)
{
  CS_PIN_ASSERT()
  SPI.transfer(addr);
  for (int i = 0; i < len; i++)
  {
    SPI.transfer(src[i]);
  }
  CS_PIN_DEASSERT()
}

void writeRegister(uint8_t addr, uint8_t val)
{
  CS_PIN_ASSERT()
  SPI.transfer(addr);
  SPI.transfer(val);
  CS_PIN_DEASSERT()
}
