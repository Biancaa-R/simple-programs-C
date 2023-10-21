# include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("file1.txt","w");
    fprintf(fptr,"hello world\n");
    fprintf(fptr,"hi there");
    fclose(fptr);
    return 0;
}