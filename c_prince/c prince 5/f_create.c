# include <stdio.h>
int main()
{
    //file creation
    FILE *fptr;
    fptr=fopen("file1.txt","w");
    fclose(fptr);
    return(0);
}