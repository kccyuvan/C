#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char Name[100];
};
void printINFO(struct student S1);
int main(){
    struct student S1 = {1255, 4.8, "yuvan"};
    pintINFO(S1);
    return 0;
}
void printINFO(struct student S1){
    printf("student of roll No = %s", S1.roll);
    printf("student of cgpa = %s", S1.cgpa);
    printf("student of Name = %s", S1.Name); 
}