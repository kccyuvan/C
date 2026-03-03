#include<stdio.h>
int main(){
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);
    if(marks <= 30){
        printf("C \n");
    } else if(marks >= 30 && marks <= 50) {
        printf("B \n");
    } else if(marks >= 50 && marks <= 90){
        printf("A \n");
    } else if(marks >= 90 && marks <= 100){
        printf("A+");
    } else {
        printf("GOOD BOY");
    }
    return 0;
}