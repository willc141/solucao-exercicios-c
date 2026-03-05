// Create an array of 3 strings (char pointers). Write a program to swap the pointers to “sort” the strings based on their length.

#include <stdio.h>
#include <string.h>

int main()
{
    char *list[] = {"Watermelon", "Apple", "Banana"};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (strlen(list[j]) > strlen(list[j + 1])) {
                char *temp = list[j];
                list[j] = list[j + 1];
                list[j +  1] = temp;
            }
        }
    }
    printf("Menor: %s\nMaior: %s\n", list[0], list[2]);
    return 0;
}