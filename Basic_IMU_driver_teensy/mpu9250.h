#ifndef _MPU9250_H_
#define _MPU9250_H_

//see https://github.com/bolderflight/MPU9250 for help

#include <Arduino.h>
#include <SPI.h>

/* Register definitions */
#define ACCEL_XOUT 59   //high byte at 59, low byte at 60
#define ACCEL_YOUT 61
#define ACCEL_ZOUT 63
#define GYRO_XOUT 67
#define GYRO_YOUT 69
#define GYRO_ZOUT 71
#define PWR_MGMT_1 107    //see register definitions page 40
#define FIFO_CNT 114      //high byte at 114, low byte at 115

#define HX 3
#define HY 5
#define HZ 7
#define CNTL1 10          //see register definitions page 51

//to read magnetometer registers, set slave 0 address to the magnetometer device's address, 0x0c
#define I2C_SLV0_ADDR 37
#define I2C_SLV0_REG 38   //see register definitions page 20
#define I2C_SLV0_CTRL 39   //see register definitions page 20




#endif
