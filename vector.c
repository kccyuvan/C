#include<stdio.h>
struct vecter {
    int x;
    int y;
};
void CalcSum(struct vecter V1, struct vecter V2, struct vecter sum);
int main(){
    struct vecter V1 = {6, 20};
    struct vecter V2 = {9, 10};
    struct vecter sum = {0};
    CalcSum(V1, V2, sum);
    return 0;
}
void CalcSum(struct vecter V1, struct vecter V2, struct vecter sum){
    sum.x = V1.x + V2.x;
    sum.y = V2.y + V2.y;
    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}