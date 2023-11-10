#include<stdio.h>
void stringlwr(char *s);
 
int main()
{
    char str[100];
 
	printf("Enter any string : ");
    scanf("%s(\0)",str);//read string with spaces
    
    stringLwr(str);
    printf("String after stringuppar = %s\n",str);
    
   return 0;
}
void stringLwr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z') // ato A..
        {
            s[i]=s[i]-32; // 32 diff between first to last of ascii
        }
        i++;
    }
}
