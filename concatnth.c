#include <stdio.h>
char* mystrncat(char*,char*,int);
int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    int n = 3;

    char *result = mystrncat(dest, src, n);
    printf("Concatenated string: %s\n", result);

    return 0;
}

char* mystrncat(char *dest, char *src, int n) {
    char *originaldest = dest;  // Store the original destination pointer

    // Move dest to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy characters from src to dest, up to a maximum of n characters
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // Null terminate the concatenated string
    *dest = '\0';

    return original_dest;  // Return a pointer to the beginning of the destination string
}

