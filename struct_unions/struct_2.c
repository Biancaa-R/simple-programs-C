#include<stdio.h>
#include <stdint.h>
typedef struct
{
    uint8_t flag;   /* data *///1
    uint8_t temp;   //2
    uint8_t mac;    //4
    uint16_t crc;   //12
    uint8_t bat;    //8
    uint8_t sen;    //3
    uint8_t air;    //1
}node;

int main()
{
    uint32_t rec=0;
    node m;
    printf("Enter the value\n");
    scanf("%x",&rec);
    m.flag=(uint8_t)rec &(1<<0);
    //m.temp=(uint8_t)rec & (3<<1);
    m.temp = (uint8_t)((rec>>1)&(3<<0));
    m.mac=(uint8_t)((rec>>3)&(0xF <<0));
    m.crc=(uint8_t)((rec>>7)&(0xFFF<<0));
    m.bat=(uint8_t)((rec>>19)&(0xFF<<0));
}
