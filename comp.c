#include<stdio.h>
struct complex {
    int real;
    int img;
};
int main(){
    struct complex Number1 = {5, 8};
    struct complex *ptr = &Number1;
    printf("real part is = %d\n", ptr->real);
    printf("img part is = %d\n", ptr->img);
    return 0;
}