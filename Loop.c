#include<stdio.h>
//Print factorial of n numbers
int main(){
    int n;
    printf("Enter thr Number:");
    scanf("%d",n);
    int fact=1;
    for (int i=1;i<=n;i++){
    fact=fact*i;
    }
    printf(" Factorial of N: %d",fact);
    return 0;
}