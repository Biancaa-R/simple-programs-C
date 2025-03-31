#include <stdio.h>
int main() {
 int n;

 // Taking the number of rows for the pyramid
 printf("Enter the number of rows: ");
 scanf("%d", &n);

 // Loop for each row
 for (int i = 1; i <= n; i++) {
 // Printing spaces for alignment
 for (int j = i; j < n; j++) {
 printf(" ");
 }

 // Printing stars for the pyramid structure
 for (int k = 1; k <= (2 * i - 1); k++) {
 printf("*");
 }

 // Moving to the next line after each row
 printf("\n");
 }

 return 0;
}
//incase of indexing from zero use 2i+1