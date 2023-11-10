
#include<stdio.h>
#include<string.h>
int main(){
 int result;
 char str1[20]="satish yadav";
 char str2[20]="satish yadav";
 result=mystrcmp(str1,str2);
 printf("%d",result);
}
int mystrcmp(char* str1,char* str2){
    while(*str1!='\0'&& *str2!='\0'&& *str1==*str2){
        str1++;
        str2++;
    }
    if(*str1==*str2){
        return 1;
    }
    else{
        return 0;
    }

}

