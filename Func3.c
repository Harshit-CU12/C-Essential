#include<stdio.h>
int sum(int a,int b);//Function declaration

int main(){
    int a,b;
    
printf("Entter first number :");//Function call
scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);

    int S=sum(a,b);
    printf("Sum is %d:",S);
    return 0;
}

int sum (int x,int y){// Function defining
    return x+y;
}