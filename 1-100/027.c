// Practice Problem: Write a C program to find and print both the largest (maximum) and smallest (minimum) elements in a given integer array.

#include <stdio.h>

#define ARRAYSIZE 6

int main()
{
    int array[ARRAYSIZE] = { 87, 97, 67, 4, 9, 7 };
    int max, min;
    max = array[0];
    min = array[0];
    
    for (int i = 0; i < ARRAYSIZE; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        
        if (array[i] < min) {
            min = array[i];
        }
    }
    
    printf("Menor: %d\n", min);
    printf("Maior: %d\n", max);
}