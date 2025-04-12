#include <stdio.h>
int stringLength(char str[]) {
 int length = 0;
 while (str[length] != '\0') {
 length++;
 }
 return length;
}
int main(int argc ,char* argv[]) 
{
    int num;
    num=stringLength(argv[1]);
    printf("The length of the fucking string is %d",num);
}
