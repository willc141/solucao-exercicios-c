// Use a pointer to iterate through a string and print each character on a new line, stopping at the null terminator.

#include <stdio.h>

int main() {
    char *message = "C Pointers";

    for (char *p = message; *p != '\0'; p++) {
        printf("%c\n", *p);
    }
}