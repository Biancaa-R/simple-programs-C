//Number value changes

# include<stdio.h>
int main(){
    int x=100;
    printf("The value before function call %d\n",x);
    change_value(x);
    printf("The value after function call %d\n",x);
    return 0;
}

void change_value(int num){
    printf("The value inside fn before change %d\n",num);
    num+=100;
    printf("The value inside fn after change %d\n",num);
}