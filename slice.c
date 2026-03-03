#include<stdio.h>
#include<string.h>
void slice(char str[], int n, int m);
int main(){
    char str[] = "helloworld";
    slice(str, 3, 6);
    return 0;
}
void slice(char str[], int n, int m){
    char Newstr[100];
    int j = 0;
    for(int i=0; i<=m; i++, j++){
        Newstr[j] = str[i];
    }
    str[j] = '\0';
    puts(Newstr);
}