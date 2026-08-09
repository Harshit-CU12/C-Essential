//Write a program to calculate area of a Square.(Side is given)
#include <stdio.h>
int main(){
    int side;
    printf("Enter side: ");
    scanf("%d", &side);

    printf("Area is: %d", side * side);
    return 0;
}