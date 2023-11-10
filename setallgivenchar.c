#include<stdio.h>
char*  mystrset(char*,char,int);
int main(){
    char str[20]="abcdefgh";
    char ch='z';
    int n=3;
   // mystrset(str,ch);
     char* result= mystrset(str,ch,n);

    printf("this is string %s\n",result);
}
char* mystrset(char* str, char ch,int n){
    int len=strlen(str);
    for(int i=0;i<n;i++){
        str[i]=ch;
    }
    return str;
}