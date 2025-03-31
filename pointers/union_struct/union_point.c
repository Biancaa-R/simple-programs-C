#include<stdio.h>

typedef union{
    unsigned long reg;
    struct{
        unsigned char u8rotateForwardSpeed;
        unsigned char u8rotateReverseSpeed;
        unsigned char u8speedRateChange;
        unsigned char b1rotateStatusFlags: 2;
    }member;
    
}LED_ROTATE_Type;
typedef union{
    unsigned long reg;
    struct{
        unsigned short u16pwmLightIntensity;
        unsigned short u16breatheSpeed;
    }member;
}LED_BREATHE_Type;

typedef union{
    unsigned long reg;
    struct{
        unsigned char u8pattern[4];
    }member;
}LED_PATTERN_Type;
//a larger struct of the unions
typedef struct{
    volatile LED_BREATHE_Type ledBreathe;
    volatile LED_PATTERN_Type ledPattern;
    volatile LED_ROTATE_Type ledRotate;
}STRUCT_LEDVariables;
int main()
{
    STRUCT_LEDVariables STRUCT_allLEDVariables;
    STRUCT_LEDVariables *pSTRUCT_LEDVariables =&STRUCT_allLEDVariables;
    pSTRUCT_LEDVariables->ledRotate.reg=0xFFFFFFF1;
    pSTRUCT_LEDVariables->ledRotate.member.u8rotateForwardSpeed=0xFF;
}