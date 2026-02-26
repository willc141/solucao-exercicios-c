// Dado int nums[] = {10, 20, 30, 40, 50}, imprima todos os elementos usando apenas aritmética de ponteiros, sem nums[i].

#include <stdio.h>

int main() {
    int nums[] = { 10, 20, 30, 40, 50 };
    int *ptr = nums;
    int *fim = nums + 5;
    
    while (ptr < fim) {
        printf("%d\n", *ptr);
        *ptr++;
    }
}