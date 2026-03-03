#include<stdio.h>
int main(){
    int x = 22;
    int y = 33;
    int add;
    int *ptrx = &x;
    int *ptry = &y;
    int *ptradd = &add;
    *ptradd = *ptrx / *ptry;
    printf("enter number of pointer: %d",*ptradd);
    return 0;
}