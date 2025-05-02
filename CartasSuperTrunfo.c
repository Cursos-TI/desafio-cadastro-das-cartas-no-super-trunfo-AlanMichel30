#include <stdio.h>
#include <string.h>

int main() {

    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade1, densidade2;
    float capital1, capital2;
   
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o número de carta: ");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em Km: ");
    scanf("%f", &area1);

    printf("Digite o número PIB: ");
    scanf("%f", &pib1);

    printf("Digite o quantidade de turísiticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("\n");

    densidade1 = populacao1 / area1;
    capital1 = (pib1 * 1000000000) / populacao1;

    
    printf("------Carta 1------:\n");
    printf("Estado: %c \n", estado1);
    printf("Código da Carta: %s \n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área (em Km): %.2f \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capital1);
    printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o número de carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km: ");
    scanf("%f", &area2);

    printf("Digite o número PIB: ");
    scanf("%f", &pib2);

    printf("Digite o quantidade de turísiticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    densidade2 = populacao2 / area2;
    capital2 = (pib2 * 1000000000) / populacao2;
    
    printf("------Carta 2------:\n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %s \n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área (em Km): %.2f \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/Km \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", capital2);
    return 0;
}
