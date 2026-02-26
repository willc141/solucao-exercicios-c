// Use calloc() to dynamically allocate memory for an array of 10 floating-point numbers. Print the first and last elements to verify that calloc automatically initializes all elements to zero. Then, free the memory.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p = calloc(10, sizeof(float));
    printf("%.2f\n", p[0]);
    printf("%.2f\n", p[9]);
    free(p);
}