#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[1] = 1;
    ptr[2] = 3;
    ptr[3] = 5;
    ptr[4] = 7;
    ptr[5] = 9;
    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }

    ptr = (int *) realloc(ptr, 6); 
    ptr[1] = 2;
    ptr[2] = 4;
    ptr[3] = 6;
    ptr[4] = 8;
    ptr[5] = 10;
    ptr[6] = 12;
    for(int i=0; i<6; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}