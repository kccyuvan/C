#include<stdio.h>
#include<string.h>
void checkChar(char str[], int ch);
int main(){
    char str[] = "e";
    char ch = 'e';
    checkChar(str, ch);
    return 0;
}
void checkChar(char str[], int ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("character is a present");
            return;
        }else{
            printf("character is absent");
            return;
        }
    }
}