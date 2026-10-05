#include <stdio.h>
int main(void)
{
    int marks[4];
    printf("Enter Your Marks");
    for(int i =0;i<=5;i++){
      scanf("%d",&marks[i]);
    }
   printf("%d\n",marks[3]);
    return 0;
}