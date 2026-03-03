#include<stdio.h>
int main(){
    int ch;
    printf("enter charecter : ");
    scanf("%d", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("UPER CASE \n");
    } else if(ch >= 'a' && ch <= 'z'){
        printf("LOWER CASE \n");
    }
    return 0;
}