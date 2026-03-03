#include<stdio.h>
int sum(int n){
    int add;
    if(n == 1){
        return 1;
    }else{
        add = n * sum(n-1);
        return add; 
    }
}
int main(){
    int fact;
    fact = sum(5);
    printf("fact of number: %d",fact);
    return 0;
}