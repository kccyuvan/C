#include<stdio.h>
int calculatPercentage(int Science, int Math, int Sanskrit);
int main(){
    int Science = 89;
    int Math = 98;
    int Sanskrit = 99;
    printf("Prcentage is : %d", calculatPercentage(Science, Math, Sanskrit));
    return 0;
}
int calculatPercentage(int Science, int Math, int Sanskrit){
    return ((Science, Math, Sanskrit) / 3) * 100;
}