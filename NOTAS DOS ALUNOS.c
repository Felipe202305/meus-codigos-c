#include <stdio.h>

int main() {
    float notas[5] = {7.5, 8.0, 6.5, 9.0, 5.5};
    
    printf("notas dos alunos:\n");
    printf("aluno 1: %.1f\n", notas[0]);
    printf("aluno 2: %.1f\n", notas[1]);
    printf("aluno 3: %.1f\n", notas[2]);
    printf("aluno 4: %.1f\n", notas[3]);
    printf("aluno 5: %.1f\n", notas[4]);
    
    return 0;
}