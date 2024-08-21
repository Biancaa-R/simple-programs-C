//•	Write a function count (number, array, length) that counts the number of times number appears in array. The array has length elements. The function should be recursive. Write a test program to go with the function

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

int counter;
int main()
{
    int num;

    int len=3;
    //int array1 [3]={1,2,3};
    printf("Enter the number to count");
    scanf("%d",&num);
    printf("Enter the size of the array");
    scanf("%d",&len);
    int * array1 =malloc(sizeof(int)*len);
    for (int i =0;i<len;i++){
        printf("Enter the element");
        scanf("%d",&array1[i]);
    }
    printf("Ok done");
    count(num,len,array1);
    printf("%d is the count value",counter);
}

void count(int num, int len,int array1[])
{
    if (len==1){
        //time to stop
        if(array1[len-1]==num){
            counter=counter+1;
        }
    }
    else{
        if (array1[len-1]==num){
            counter=counter+1;
        }
        array1[len-1]=0;
        len=len-1;
        count(num,len,array1);
    }
}