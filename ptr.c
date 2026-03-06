#include<stdio.h>
void printAdd(int *Px, int *Py);
int main(){
    int x = 5;
    int y = 2;
    printAdd(&x, &y);
    return 0;
}
void printAdd(int *Px, int *Py){
    int sum;
    sum = *Px + *Py;
    printf("sum of : %d", sum);
}