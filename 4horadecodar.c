#include <stdio.h>

int main() {
    char nomeAluno[20];
    int idadeAluno;
    int matriculaAluno;

    printf("Digite seu nome completo: ");
    scanf("%s", nomeAluno);
    printf("Digite sua idade: ");
    scanf("%d", &idadeAluno);
    printf("Digite o número da matrícula: ");
    scanf("%d", &matriculaAluno);

    printf("Nome: %s\n", nomeAluno);
    printf("Idade: %d anos\n", idadeAluno);
    printf("Matrícula: %d\n", matriculaAluno);
    

    return 0;
}