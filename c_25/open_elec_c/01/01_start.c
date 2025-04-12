# include <stdio.h>
int main()
{
    //char name[10]="Python";
    //name=;
    char name[30];
    printf("Enter the value of name\n");
    scanf("%s",&name);
    printf("%s hello \n",name);
    int num1,num2,sum;
    float avg;
    printf("Enter the physics marks\n");
    scanf("%d",&num1);
    printf("Enter the maths marks\n");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("The sum value is %d",sum);
    avg = sum/2;
    printf("The average value is %f",avg);
    return 0;

}