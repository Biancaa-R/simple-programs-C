//character classification:
#include<stdio.h>
int main(){
    char x;
    int found=0;
    //double quotes pota error varum

    printf("Enter the character");
    scanf("%c",&x);
    char arr[20]={'!','@','#','$','%','^','&','*','(',')','.',',','<','>','{','}',';',':','[',']'};
    for (int i=0;i<20;i++){
        if (arr[i]==x){
            printf("%c is a special character");
            found=1;
        }
    }
    /*char arr[6]={'/n','/t','/f','//','/?','/b'};
    for (int i=0;i<6;i++){
        if (arr[i]==x){
            printf("%c is an escape sequence");
        }
    }
    //leads to overflow error*/
    if ((x<='z')&& (x>='a')){
        printf("%c is a small case letter",x);
    }
    else if((x<='Z')&& (x>='A')){
        printf("%c is a large case letter",x);
    }
    else if (x<='9' && x>='0'){
        printf("%c is a number");
    }
    else{
        if (found!=1)
            printf("You have typed in some random invalid character");
    }

}
