#include<stdio.h>
#include<string.h>

//void countlength(char arr[]);
int main(){
    //int newstring[] = "yuvan";
    //int oldstring[] = "vishal";
    //puts(newstring, oldstring);
    char firststr[100] = "yuvan";
    char secstr[] = "vishal";
    strcopy(firststr, secstr);
    puts(firststr);
    return 0;
}

//void countlength(char arr[]){
    //int count = 0;
    //for(int i=0; arr[i]!='\0'; i++){
    //    count++;
    //}
    //return count;
//}