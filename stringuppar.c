#include<stdio.h>
void stringlwr(char *s);
 
int main()
{
    char str[100];
 
	printf("Enter any string : ");
    scanf("%s(\0)",str);//read string with spaces
    
    stringLwr(str);
    printf("String after stringLwr = %s\n",str);
    
   return 0;
}
void stringLwr(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z') // Ato a..
        {
            s[i]=s[i]+32; // 32 diff between first to last of ascii
        }
        i++;
    }
}
