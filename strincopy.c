#include <stdio.h>
char* mystrncpy(char*,char*,int);
int main() {
    char dest[20];
   char *src = "Hello, World";
    int n = 2;

    char *result = mystrncpy(dest, src, n);
    printf("Copied string %s\n", result);

    return 0;
}

