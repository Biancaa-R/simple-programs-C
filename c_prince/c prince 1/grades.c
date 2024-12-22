/* 5. A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/

#include <stdio.h>
int main(){
    float marks;
    printf("Enter the marks of the student");
    scanf("%f",&marks);
    if (marks<25){
        printf("The grade is F for the marks %f",marks);
    }
    else if (marks>=25 && marks <45){
        printf("The grade is E for the marks %f",marks);
    }
    else if (marks>=45 && marks <50){
        printf("The grade is D for the marks %f",marks);
    }
    else if (marks>=50 && marks<60){
        printf("The grade is C for the marks %f",marks);
    }
    else if (marks>=60 && marks<80){
        printf("The grade is B for the marks %f",marks);
    }
    else if (marks>80){
        printf("The grade is A for the marks %f",marks);
    }
    return 0;
}