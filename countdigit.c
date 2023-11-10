#include<stdio.h>
void Digitcounter(char*);
    int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);

    Digitcount(str);
    }

     void Digitcount(char* str){
     int countDigits;
      int count;
       countDigits =  0;
    for (count = 0; str[count] != NULL; count++) {

         if (str[count] >= '0' && str[count] <= '9') // digit count
             countDigits++;
    }
    printf("%d",countDigits);
}