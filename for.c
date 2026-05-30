#include <stdio.h>
 
int main() {
    int numero, resultado;
    
    printf("Digite um numero para ver a tabuada:");
    scanf("%d", &numero);
    printf("Tabuada do %d:\n", numero);

    for(int i = 1; i <= 10; i++) {
        resultado = numero * i;
        printf("%d X %d = %d\n", numero, i, resultado);
    }

    return 0;
}