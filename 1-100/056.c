// Declare an integer variable data with an initial value of 100. Declare a pointer data_ptr that points to data. Use the pointer only to change the value of data to 250. Print the final value of data.

#include <stdio.h>

int main()
{
    int data = 100;
    int *ponteiro_data = &data;
    *ponteiro_data = 250;
    printf("Valor final: %d\n", *ponteiro_data);
}