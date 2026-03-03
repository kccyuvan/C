#include<stdio.h>

void printcount(char arr[]);
int main(){
    char name[100];
    fgets(name, 100, stdin);
    puts(name);
    return 0;
}

void printcount(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}