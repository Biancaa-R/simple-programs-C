//Using pointers for value change:

#include <stdio.h>
void change_val(int *num);
//warning: conflicting types for 'change_val'; have 'void(int *)'
//14 | void change_val(int *num)
//incase it is not declared in the start there is a warning 

int main()
{
    int x=100;
    int *ptr=&x;
    printf("The value before function call %d\n",*ptr);
    change_val(&x);
    printf("The value after function call %d\n",*ptr);
}

void change_val(int *num)
{
    printf("The value inside function before change %d\n",*num);
    *num+=100;
    printf("The value inside function after change %d\n",*num);
}