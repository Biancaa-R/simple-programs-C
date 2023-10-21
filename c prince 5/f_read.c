# include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    char mystring[100];
    fgets(mystring,100,fptr);
    printf("%s",mystring);
    fptr+=1;
    fgets(mystring,100,fptr);
    printf("%s",mystring);
    fclose(fptr);
    return 0;
}