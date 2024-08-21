//•	Write a function that takes a character array and returns a primitive hash code by adding up the value of each character in the array.

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int counter;

int count1(char array[],int len);

int main()
{
    int len;
    printf("Enter the length of array");
    scanf("%d",&len);
    char* array1= malloc(sizeof(char)*len);
    printf("Enter the characters:\n");
    for (int i=0;i<len;i++){
        scanf("%c",&array1[i]);
    }
    counter=count1(array1,len);
    printf("The counted value is %d",counter);
}
int count1(char array1[],int len)
{
    for(int i=0;i<len;i++)
    {
        int ch_val= (int) array1[i];
        counter += ch_val;
    }
    return counter;
}


