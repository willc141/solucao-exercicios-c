// Practice Problem: Write a C program to print the first N terms of the Fibonacci series. (The series starts with 0, 1 and each subsequent number is the sum of the two preceding ones: 0,1,1,2,3,5,8,…).

#include <stdio.h>
#define START 3

void sequencia_fibonacci(long int n);

int main()
{
    long int termos, resultado;

    printf("Quantos termos deseja calcular? ");
    scanf("%ld", &termos);
    
    sequencia_fibonacci(termos);
    printf("\n");
}

void sequencia_fibonacci(long int n)
{
    long int t1, t2, proximo_termo;
    t1 = 0;
    t2 = 1;
    proximo_termo = t1 + t2;
    
    printf("Série de Fibonacci até %ld termos:\n%ld %ld ", n, t1, t2);

    for (int i = START; i <= n; ++i) {
        printf("%ld ", proximo_termo);
        t1 = t2;
        t2 = proximo_termo;
        proximo_termo = t1 + t2;
    }
}