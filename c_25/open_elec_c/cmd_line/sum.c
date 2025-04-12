#include <stdio.h>
int main(int argc, char *argv[]) {
 if (argc == 3) {
 int num1 = atoi(argv[1]);
 int num2 = atoi(argv[2]);
 printf("Sum: %d\n", num1 + num2);
 } else {
 printf("Please provide two integers as arguments.\n");
 }
 return 0;
}