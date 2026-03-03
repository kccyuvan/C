#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number: ");
    scanf("%d", &n);
    printf("enter number2: ");
    scanf("%d", &j);
    for(i = 1; i <= n; i++){
        printf("yuvan\n");
    }
    if(j == 4){
        printf("yuvan\n");
    }else if(j == 6){
        printf("vishal\n");
    }else{
        printf("ashok\n");
    }
    return 0;
}