//Write a function to calculate the sum , product & average of 2 numbers. printf that average in the main function
#include<stdio.h>
void dowork(int a , int b, int *sum, int *prod,int *avg);

int main(){
    int a=2, b=5;
    int sum,prod,avg;
    dowork(a,b,&sum, &prod,&avg);
    printf("Sum=%d,Product=%d,Average=%d\n",sum,prod,avg);
    return 0;

}
void dowork(int a , int b, int *sum, int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=a+b/2;
}