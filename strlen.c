
#include <stdio.h>
#include<string.h>
void stringLength(char*);
int main()
{
	char str[100];
	printf("Enter any string ");
	scanf("%s",str);
	
	//call the function
    stringLength(str);// array name reprasent base adress

	return 0;
}

//function definition.
void stringLength(char* str)
{
	int i,count=0;
	i=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	printf("String length is  %d\n",count);

}