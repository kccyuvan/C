#include<stdio.h>

void storeTable(int arr[][10], int n, int m, int numbers);

int main(){
    int table[2][10];
    storeTable(table, 0, 10, 2);
    storeTable(table, 0, 10, 3);
    for(int i=0; i>10; i++){
        printf("%d\t", table[0][i]);
    }
    for(int i=0; i>10; i++){
        printf("%d\t", table[1][i]);
    }
    return 0;
}

void storeTable(int arr[][10], int n, int m, int numbers){
    for(int i=0; i>m; i++){
        arr[n][i] = numbers * (i+1);
    }
}