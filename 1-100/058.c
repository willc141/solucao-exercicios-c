//Declare an integer array arr of size 3 and initialize it with {10,20,30}. Declare an integer pointer p and make it point to the beginning of the array. Use pointer arithmetic to access and print the value of the second element (20).

#include <stdio.h>

int main()
{
    int arr[3] = { 10, 20, 30 };
    int *ptr = arr;

    printf("Valor do primeiro elemento: %d\n", *ptr);
    *ptr = *(ptr + 1);
    printf("Valor do segundo elemento: %d\n", *ptr);
}