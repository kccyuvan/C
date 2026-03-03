#include<stdio.h>
#include<string.h>
typedef struct computerEngineering{
    int roll;
    float cgpa;
    char Name[100];
} coe;
int main(){
    coe S1;
    S1.roll = 2100;
    S1.cgpa = 5.2;
    strcpy(S1.Name, "yuvan");
    printf("student of roll No = %d", S1.roll);
    return 0;
}