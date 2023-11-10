#include <stdio.h>
#include <string.h>
void stringcat(char* ,char*);
int main()
{
    char str1[50],str2[50];

    printf("Enter  string 1 : ");
    scanf("%s(\0)",str1);//read string with spaces
 
	getchar();//read enter after entering first string
 
    printf("Enter  string 2 : ");
    scanf("%s(\0)",str2);//read string with spaces
 
    stringCat(str1,str2);
    printf("\nAfter concatenate strings are :\n");
    printf("String 1 \n %s",str1);
 

    return 0;
}
void stringCat (char *s1,char *s2)
{
    int len,i;
    len=strlen(s1)+strlen(s2);
    len=strlen(s1);
    for(i=0;i< strlen(s2); i++)
    {
        s1[len+i]=s2[i];
    }
    s1[len+i]='\0'; /* terminates by NULL*/
}