#include<stdio.h>

void printstring(char arr[]);
int main(){
    //char firstName[] = "yuvan";
    //char lastName[] = "teli";
    //printstring(firstName);
    //printstring(lastName);
    // char name[50];
    // scanf("%s", name);
    // printf("your name is : %s",name);
    char fullName[100];
    scanf("%s", fullName);
    printf("your name is : %s", fullName);
    return 0;
}

void printstring(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}