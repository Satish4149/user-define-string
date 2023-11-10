#include<stdio.h>
char mystrchr(char*,char);
int main(){
    char str[]="computer program";
    char *ptr;
    char ch='g';
    ptr=mystrchr(str,ch);
    printf("the first occurance of %c in '%s'\n",ch,str,ptr);
}
char mystrchr(char*str,char ch){
int len=strlen(str);
int i=len-1;
while(str[i]!='\0'){
    if(str[i]==ch){
 return &str[i];
    }
    i--;
}
}