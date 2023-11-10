#include<stdio.h>
char* mysetall(char*,char);
int main()
{
    int result;
    char ch[20]="abcdegakjlm";
    char c='a';
   result= mysetall(ch,c);
   printf("%s",result);
}

char* mysetall(char* ch,char c)
{
    int len=strlen(ch);
    for(int i=0;i<20;i++){
        ch[i]=c;
    }
    return ch;

}


