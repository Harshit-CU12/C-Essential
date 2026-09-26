// Write 2 functions - one to print "Hello" & second to print "Goodbye".
#include<stdio.h>


void printHello();//declaration
void Goodbye();

int main (){
printHello();//Function call
printGoodbye();
return 0;
}
void printHello(){
    printf("Hello!\n");
}
void printGoodbye(){
    printf("Goodbye:)\n");
}