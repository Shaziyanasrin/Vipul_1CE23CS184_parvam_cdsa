#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="hello";
    int length=0;
    while(str[length]!='\0'){
        length++;

    }
    printf("the length of string %d",length);
    return 0;
}