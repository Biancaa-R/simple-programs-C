#include <stdio.h>
#include <stdint.h>
struct node{
    char a;
    short b;
    char c;
};
int main()
{
    int i,j,k;
    struct node m;
    printf("sizeof %d\n",sizeof(m));
    m.a=0xAA;
    m.b=0xBBCCDDEE;
    m.c=0xDD;
    uint8_t *ptr =&m;
    for (int i=0;i<12;i++){
        printf("addr %X and data %X \n",ptr,*ptr);
        ptr++;
    }
}