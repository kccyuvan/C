#include<stdio.h>
#include<string.h>
typedef struct address{
    int houseNo;
    int blockNo;
    char city;
    char state;
} add;
void printaddress(struct address add); 
int main(){
    add S1;
    printf("house No is = %d", S1.houseNo); 
    printf("block No is = %d", S1.blockNo);
    printf("city is = %c", S1.city);
    printf("state is = %c", S1.state);
    return 0;
}
void printaddress(struct address add){
    printf("add of : %d", add);
}