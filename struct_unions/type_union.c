#include<stdio.h>
union abc{
    float a;
    char b[4];
}var;

int main(){
    var.a=77.6;
    printf("a =%f\n",var.a);
    printf("b= %s\n",var.b);
    return 0;
}