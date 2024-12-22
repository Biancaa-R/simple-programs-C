// Fibonacci series:
#include<stdio.h>

int fib(int num){
    if(num<=1){
        return num;
    }
    else{
        return fib(num-1)+fib(num-2);
        
    }
}

int main(){
    int num;
    int sum;
    printf("Enter the limit to find fibonacci series ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
            printf("%d\n",fib(i));
        }

    return 0;
}

// PS C:\Users\Biancaa. R> cd "c:\Users\Biancaa. R\c prince\rec\" ; if ($?) { gcc fib_rec.c -o fib_rec } ; if ($?) { .\fib_rec }
// Enter the limit to find fibonacci series 2000
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144
// 233
// 377
// 610
// 987
// 1597
// 2584
// 4181
// 6765
// 10946
// 17711
// 28657
// 46368
// 75025
// 121393
// 196418
// 317811
// 514229
// 832040
// 1346269
// 2178309
// 3524578
// 5702887
// 9227465
// 14930352
// 24157817
// 39088169
// 63245986
// 102334155
// 165580141
// 267914296
// 433494437
// 701408733
// 1134903170
// 1836311903
// -1323752223
// 512559680
// -811192543
// -298632863
// -1109825406