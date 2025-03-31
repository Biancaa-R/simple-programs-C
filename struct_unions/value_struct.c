//class program:
#include<stdio.h>
#include<stdint.h>
struct node{
    char a;
    int b;
    char c;
};

int main()
{
    struct node m;
    m.a=0xAA;
    m.b=0xBBCCDDEE;
    m.c=0xDD;
    printf("%x",m.b);
    printf("%x and %x and %x",&m,m,&m.a);
    //the variation is always 14
    uint8_t *ptr = &m;
    //node *ptr =&m;
    for(int i=0;i<12;i++){
        printf("address %x : value %x\n",ptr,*ptr);
        ptr++;
    }
}