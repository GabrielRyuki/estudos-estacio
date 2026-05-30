#include <stdio.h>

int main() {
    int entrada;

    do {
        printf("Digite um numero (Par para sair): ");
        scanf("%d", &entrada);
        printf("Voce digitou: %d\n", entrada);
    } while(entrada % 2 != 0);

    printf("Programa encerrado. Voce digitou um numero par.\n");
    
    return 0;
}