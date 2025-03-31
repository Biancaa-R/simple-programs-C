#include <stdio.h>
typedef struct{
    float real;
    float imag;
} complex;
int main()
{
    complex x;
    complex *p;
    p=&x;
    p->real=13.643;
    p->imag=14.567;
    printf("The value of the complex number is %f + %f j",x.real,x.imag);
}