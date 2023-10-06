//Write a function to calculate area and perimeter of a rectangle.

# include<stdio.h>

float area(float len,float breadth){
    return(len*breadth);
}
float peri(float len,float breadth){
    return (2*(len+breadth));
}
int main()
{
    float len,breadth;
    printf("Enter the length");
    scanf("%f",&len);
    printf("Enter the breadth");
    scanf("%f",&breadth);
    char choice1,choice2;
    float value;
    // Consume the newline character left in the input buffer
    while (getchar() != '\n');
    printf("Do you want to calculate area? y/n");
    scanf("%c",&choice1);
    if(choice1=='y'){
        value=area(len,breadth);
        printf("The value of area is %f \n",value);

    }
    while (getchar() != '\n');
    printf("Do you want to calculate perimeter y/n");
    scanf("%c",&choice2);
    if(choice2=='y'){
        value=peri(len,breadth);
        printf("The value of the perimeter is %f",value);
    }
    /*The program works weirdly in case while getchar!=\n is not used
    it takes the /n as the character input directly
    It consumes any newline characters in the input buffer before reading the next character choice.*/
}