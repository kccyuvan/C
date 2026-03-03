#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    ptr = (int *) calloc(n, sizeof(int));

    printf("enter n : ");
    for(int i=0; i<n; i++){
        scanf("%d", ptr[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}