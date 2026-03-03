#include<stdio.h>
int main(){
    int marks;
    printf("enter number : ");
    scanf("%d", &marks);
    if(marks <= 30){
        printf("FAIL");
    } else if(marks >= 30 || marks <= 50){
        printf("A");
    } else if(marks >= 50 && marks <= 80){
        printf("A+");
    } else if(marks >= 80 || marks <= 100){
        printf("A++");
    } else {
        printf("wrong marks");
    }
    return 0;
}