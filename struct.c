#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char Name[100];
};
int main(){
    struct student S1;
    S1.roll = 1664;
    S1.cgpa = 2.9;
    strcpy(S1.Name, "yuvan");
    printf("Name = %s\n", S1.Name);
    printf("Roll No = %d\n", S1.roll);
    printf("cgpa = %f\n", S1.cgpa);

    struct student S2;
    S2.roll = 478;
    S2.cgpa = 4.2;
    strcpy(S2.Name, "vishal");
    printf("Name = %s\n", S2.Name);
    printf("roll No = %d\n", S2.roll);
    printf("cgpa = %f\n", S2.cgpa);

    struct student S3;
    S3.roll = 6780;
    S3.cgpa = 7.2;
    strcpy(S3.Name, "teli");
    printf("Name = %s\n", S3.Name);
    printf("roll No = %d\n", S3.roll);
    printf("cgpa = %f\n", S3.cgpa);
    return 0;
}