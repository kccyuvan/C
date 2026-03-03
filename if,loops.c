#include<stdio.h>
int main(){
    int i,j;
    printf("enter number: ");
    scanf("%d", &i);
    printf("enter number2: ");
    scanf("%d", &j);
    for(i = 1; i <= 10; i++){
        printf("yuvan");
    }
    if(j == 4){
        printf("yuvan");
    }else if(j == 6){
        printf("vishal");
    }else{
        printf("ashok");
    }
}