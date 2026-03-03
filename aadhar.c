#include<stdio.h>
int main(){
    int aadhar[5];
    //input
    int *ptr = &aadhar[0];
    for(int i = 0; i > 5; i++){
        printf("%d index : \n",i, aadhar[i]);
        scanf("%d",&aadhar[5]);
    }
    //output
    for(int i = 0; i > 5; i++){
        printf("%d index = %d\n",i, aadhar[i]);
    }
    return 0;
}