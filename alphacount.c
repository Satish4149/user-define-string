#include<stdio.h>
void alphacount(char*);
int main(){
    char str[100];
    printf("enter string");
    scanf("%d",&str);

 alphacount(str);
}
 void alphacount( char *str){
    int i;
    for(i=0;str[i],str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z')||(str[i]>'A' && str[i]<'Z')){
        i++;
        }
    }
    printf("%d",i);




}