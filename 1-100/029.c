// Practice Problem: Write a C function named check_even_odd that takes an integer as a parameter and prints whether it is “Even” or “Odd” directly within the function. Call this function from main().

#include <stdio.h>

void ehPar(int num);

int main()
{
    int a = 42;
    int b = 47;
    ehPar(a);
    ehPar(b);
}

void ehPar(int num)
{
    if (num % 2 == 0) {
        printf("%d é par\n", num);
    } else {
        printf("%d é impar\n", num);
    }

}