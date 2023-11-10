#include <stdio.h>

void reversestring(char*);
int main() {
    char myString[] = "Hello, World!";
    
    printf("Original string: %s\n", myString);
    
    reversestring(myString);
    
    printf("Reversed string: %s\n", myString);

    return 0;
}


// Function to reverse a string
void reversestring(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}