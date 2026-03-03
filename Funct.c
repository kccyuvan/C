#include<stdio.h>
void Namaste();
void Bonjour();
int main(){
    char ch;
    printf("enter i for indian and f for french : ");
    scanf("%d", &ch);
    if(ch == 'i'){
        printf("Indian \n");
    } else {
        printf("french \n");
    }
    Namaste();
    Bonjour();
    return 0;
}
void Namaste(){
    printf("Nameste \n");
}
void Bonjour(){
    printf("Bonjour \n");
}