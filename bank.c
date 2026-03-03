#include<stdio.h>
typedef struct bankaccount {
    int accountNo;
    char Name[100];
} acc;
int main(){
    acc acc1 = {123, "yuvan"};
    acc acc2 = {124, "vishal"};
    acc acc3 = {125, "ashok"};
    printf("account No is = %d", acc1.accountNo);
    printf("\n Name is = %s", acc1.Name);
    printf("\n account No is = %d", acc2.accountNo);
    printf("\n Name is = %s", acc2.Name);
    printf("\n account No is = %d", acc3.accountNo);
    printf("\n Name is = %s", acc3.Name);
    return 0;
}