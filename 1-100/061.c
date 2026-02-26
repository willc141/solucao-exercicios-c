// Given an array, access and print the third element (index 2) using three different methods: subscript notation, pointer notation with the base address, and pointer notation with an offset pointer.

#include <stdio.h>

int main()
{
    int data[5] = {1, 3, 5, 7, 9};
    int *ptr = data;
    printf("Notação de subscrito: %d\n", data[2]);
    printf("Notação de ponteiro (arr + 2): %d\n", *(data + 2));
    printf("Notação de ponteiro (ptr + 2): %d\n", *(ptr + 2));
}