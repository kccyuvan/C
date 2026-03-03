#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("charcter = 's'", ch);
    //if(fptr == NULL){
        //printf("file is run");
    //}else{
        //fclose(fptr);
    //}
    return 0;
}