//9. Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
#include<stdio.h>
int main(){
    char response;
    printf("Enter if you have medical issues or not y/n");
    scanf("%c",&response);
    if (response=='y'){
        printf("You are not eligible to take the exams");
    }
    else if(response=='n'){
       printf("You are eligible to take the exams"); 
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}
