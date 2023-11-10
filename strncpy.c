#include <stdio.h>
char* mystrncpy(char*,char*,int);
int main() {
    char dest[20];
     char *src = "Hello, World!";
    int n = 5;

    char *result = mystrncpy(dest, src, n);
    printf("Copied string: %s\n", result);

    return 0;
}


char* mystrncpy(char *dest, char *src, int n) {
    char *originaldest = dest;  // Store the original destination pointer

    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // If n is greater than the length of src, fill the remaining space with null characters
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return originaldest;  // Return a pointer to the beginning of the destination string
}

