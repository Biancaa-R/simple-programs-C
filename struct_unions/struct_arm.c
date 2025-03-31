#include<stdio.h>
#include<stdint.h>

struct node{
    uint8_t flag;  //1
    uint8_t temp;  //2
    uint8_t mac;   //4
    uint16_t crc;  //12
    uint8_t bat;   //8
    uint8_t sen;   //3
    uint8_t air;   //2
};
//structure size 32
int main()
{
    //int i,j,k,count;
    uint32_t rec=0;
    //full input data for splitting
    struct node m;
    printf("Enter the value\n");
    scanf("%x",&rec);
    //0xCDF9FBAF //1100 1101 1111 1001 1011 1010 1111
    m.flag=(uint8_t)rec & (1<<0);
    m.temp= (uint8_t)((rec>>1) &(3 <<0));
    m.mac= (uint8_t)((rec>>3) &(0xF <<0));
    m.crc= (uint16_t)((rec>>7) &(0xFFF <<0));
    m.bat= (uint8_t)((rec>>19) &(0xFF <<0));
    m.sen= (uint8_t)((rec>>21) &(7<<0));
    m.air= (uint8_t)((rec>>30) &(3 <<0));
    printf("The value of flag is  %x",m.flag);
    return 0;
}