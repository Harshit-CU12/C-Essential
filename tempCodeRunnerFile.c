#include<stdio.h>

int main(){
    char str[100];
    int count=0;
    printf("Enter a string:");
    scanf("%99s",str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||
            str[i]=='i'||str[i]=='o'||
            str[i]=='u'||str[i]=='E'||
            str[i]=='A'||str[i]=='I'||
            str[i]=='O'||str[i]=='U')
            {
                count++;
            }
    }
    printf("Total vowels=%d",count);

    return 0;
}