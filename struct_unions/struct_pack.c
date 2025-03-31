//#pragma pack(1)
#include <stdio.h>
#include<stdint.h>
struct abc{
    uint8_t flag;   /* data *///1
    uint8_t temp;   //2
    uint8_t mac;    //4
    uint16_t crc;   //12
    uint8_t bat;    //8
    uint8_t sen;    //3
    uint8_t air;    //1
}var;

int main(){
    printf("%d",sizeof(var));
}