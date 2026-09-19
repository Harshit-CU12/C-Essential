#include <stdio.h>
float average(float a,float b)
{
    return (a+b)/2.0f;
}

int main() {
    float avg = average(5.0f,7.0f);
    printf("Averge =%.2f\n",avg);
    
return 0;
}