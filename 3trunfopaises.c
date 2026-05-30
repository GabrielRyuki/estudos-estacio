#include <stdio.h>

int main() {
    char estado1, estado2; // Estados representados por 1 caracteres de 'A' a 'H'
    char cod1[5], cod2[5], nome1[20], nome2[20]; // Código da carta e nome da cidade
    int pop1, pop2; // População da cidade
    float area1, area2; // Área da cidade em km²
    float pib1, pib2; // PIB em reais
    int qtdPontosTuristicos1, qtdPontosTuristicos2; // Quantidade de pontos turísticos
    float densidadePopulacional1, densidadePopulacional2; // Densidade populacional = população / área
    float pibPerCapita1, pibPerCapita2; // PIB per capita = PIB / população


    printf("Digite o estado da Carta 1(A-H): ");
    scanf("%c", &estado1);

    printf("Digite o código da cidade da Carta1: ");
    scanf("%s", cod1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", nome1);

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &pop1);

    printf("Digite a área da cidade da Carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &qtdPontosTuristicos1);

    printf("Digite o estado da Carta 2(A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da cidade da Carta 2(01 a 04): ");
    scanf("%s", cod2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", nome2);

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &pop2);

    printf("Digite a área da cidade da Carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (reais): ");
    scanf("%.2f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &qtdPontosTuristicos2);

    densidadePopulacional1 = pop1 / area1;
    densidadePopulacional2 = pop2 / area2;
    pibPerCapita1 = pib1 / pop1;
    pibPerCapita2 = pib2 / pop2;

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %c%s\n", estado1, cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", pop1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %c%s\n", estado2, cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", pop2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
}