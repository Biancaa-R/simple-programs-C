/*8. A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/

#include<stdio.h>
int main(){
    float classes,attended;
    float percent;
    printf("Enter the total number of clsses");
    scanf("%f",&classes);
    printf("Enter the number of classes you attended");
    scanf("%f",&attended);
    percent=(attended/classes)*100;
    if (percent>75){
        printf("You are eligible to sit for the exams %f",percent);
    }
    else{
        printf("You are not eligible to sit for the exams %f",percent);
    }
    return 0;
}