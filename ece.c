#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char Name[100];
};
int main(){
   //struct student ece[100];
    //ece[0].roll = 156;
    //ece[0].cgpa = 5.8;
    //strcpy(ece[0].Name, "yuvan");
    //printf("Name = %s\n", ece[0].Name);
    //printf("roll No = %d\n", ece[0].roll);
    //printf("cgpa = %f\n", ece[0].cgpa);
    struct student S1 = {345, 5.3, "yuvan"};
    printf("student roll No = %d\n", S1.roll);
    struct student *ptr = &S1;
    printf("student roll No = %d\n", (*ptr).roll);
    printf("student roll No = %d\n", S1roll);
    return 0;
}