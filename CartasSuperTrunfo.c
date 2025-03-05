#include <stdio.h>

int main() {

    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Leitura dos dados da primeira carta
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²) da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais) da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da densidade populacional e PIB per capita da Carta 1
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da segunda carta
    printf("Digite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2); 
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²) da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais) da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da densidade populacional e PIB per capita da Carta 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB em reais

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}