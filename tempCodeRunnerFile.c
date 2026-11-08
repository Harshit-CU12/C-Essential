//Write a fuction to calculate percentage of a student from Marks in Science,maths, sanskrit
#include<stdio.h>
 int calcPercentage (int Science,int maths,int sanskrit);

 int main(){
    int Science=89;
    int maths=98;
    int sanskrit=95;
    printf("Percentage is :%d",calcPercentage (Science,maths,sanskrit));
    return 0;
 }

 int calcPercentage(int Science,int maths, int sanskrit){
    return((Science + maths + sanskrit)/3);
 }