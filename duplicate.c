#include <stdio.h>
void Duplicate(char*);
int main() {
    const char *original = "Hello, World!";
    Duplicate(original);

}
   void Duplicate(char *original){
    char *duplicate=original;
    
    if (original == NULL) {
        return 1;
    }
    
    // Print the original and duplicated strings
    printf("Original String: %s\n", original);
    printf("Duplicated String: %s\n", duplicate);
    
    return 0;
  
}