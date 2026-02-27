// Define a struct Student with id (int) and gpa (float). Create an array of 3 Student structures and initialize them. Use a structure pointer to iterate through the array and print the id and gpa of each student.

#include <stdio.h>

#define ARRAY_SIZE 3

typedef struct {
    int id;
    float gpa;
} Estudante;

int main()
{
    Estudante lista_classe[ARRAY_SIZE] = {
        {101, 3.5},
        {102, 3.8},
        {103, 3.2}
    };
    Estudante *p = lista_classe;

    printf("Dados dos estudantes:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Estudante %d: ID = %d, GPA = %.1f\n", i, p->id, p->gpa);
        p++;
    }
}