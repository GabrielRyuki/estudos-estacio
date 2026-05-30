#include <stdio.h>

int main () {
    int idade;
    float altura;
    char nome[20];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Nome: %s\n", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Idade: %d anos\n", idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Altura: %.2f metros\n", altura);
    
    return 0;
}