#include<stdio.h>
int sum(int n);
int main(){
    int age = 22;
    int *ptr = &age;
    int **pptr = (&ptr);
    printf("enter number of pointer: %d",age);
    return 0;
}
int sum(int n){
    n = n * n;
    printf("enter number: %d",n);
}