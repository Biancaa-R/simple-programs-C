#include <stdio.h> 
int main()
{ int i,sum1=0;
FILE *f1;
/* open files */
f1 = fopen("int_data.bin","w");
/* write integers to files in binary
and text format*/
for(i=10;i<15;i++)
putw(i,f1);
fclose(f1);
f1 = fopen("int_data.bin","r");
 while((i=getw(f1))!=EOF)
{	sum1+=i;
printf("binary file: i=%d\n",i);
} /* end while getw */ 
printf("binary sum=%d",sum1); 
fclose(f1);
}
