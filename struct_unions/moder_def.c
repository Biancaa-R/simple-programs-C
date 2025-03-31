#include<stdio.h>
#include <stdint.h>

#ifndef DRIVER_H_
#define DRIVER_H_
typedef struct{
    uint32_t MODER0 :2;
    uint32_t MODER1 :2;
    uint32_t MODER2 :2;
    uint32_t MODER3 :2;
    uint32_t MODER4 :2;
    uint32_t MODER5 :2;
    uint32_t MODER6 :2;
    uint32_t MODER7 :2;
    uint32_t MODER8 :2;
    uint32_t MODER9 :2;
    uint32_t MODER10 :2;
    uint32_t MODER11 :2;
    uint32_t MODER12 :2;
    uint32_t MODER13 :2;
    uint32_t MODER14 :2;
    uint32_t MODER15 :2;
}GPIOx_MODER;

#endif DRIVER_H_