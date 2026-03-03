#include<stdio.h>
#include<string.h>

void salting(char password[]);
int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "test";
    char Newpass[200];
    strcmp(Newpass, password);
    strcpy(Newpass, salt);
    puts(Newpass);
}