#include <stdio.h>
int mystrspn(char*,char*);
int main() {
     char  str1 [100] = "Hello, World!";
     char  str2[100] = "Hello,lloktjt";
    int length =  mystrspn(str1, str2);

    printf("Length of initial segment: %d\n", length);

    return 0;
}

int mystrspn( char *str1, char *str2) {
int count=0;
    for (int i = 0; str1[i] != '\0'; i++) {
        int found = 0;
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }

        if (found) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

