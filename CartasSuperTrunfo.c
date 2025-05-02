#include <stdio.h>
#include <string.h>

int main() {

    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    unsigned long int populacao1, populacao2; //Calcular a Densidade Populacional e o PIB per Capita: calcule e armazene esses valores.
    float area1, area2;
    float pib1, pib2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    float densidade1, densidade2;
    float capital1, capital2;
    float super_poder1, super_poder2;
   
    //Entrada de dados da primeiro usuários
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o número de carta: ");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em Km: ");
    scanf("%f", &area1);

    printf("Digite o número PIB: ");
    scanf("%f", &pib1);

    printf("Digite o quantidade de turísiticos: ");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("\n");

    // Cálculos da primeira cidade
    densidade1 = populacao1 / area1;
    capital1 = (pib1 * 1000000000) / populacao1;

    //Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    super_poder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + capital1 + (1.0 / densidade1); 

    //printf("------Carta 1------:\n");
    //printf("Estado: %c \n", estado1);
    //printf("Código da Carta: %s \n", codigo_da_carta1);
    //printf("Nome da Cidade: %s\n", nome_da_cidade1);
    //printf("População: %lu \n", populacao1);
    //printf("Área (em Km): %.2f \n", area1);
    //printf("PIB: %.2f bilhões de reais\n", pib1);
    //printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);
    //printf("Densidade Populacional: %.2f hab/Km\n", densidade1);
    //printf("PIB per Capita: %.2f reais\n", capital1);
    //printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o número de carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em Km: ");
    scanf("%f", &area2);

    printf("Digite o número PIB: ");
    scanf("%f", &pib2);

    printf("Digite o quantidade de turísiticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    // Cálculos da segunda cidade
    densidade2 = populacao2 / area2;
    capital2 = (pib2 * 1000000000) / populacao2;

     //Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
     super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + capital2 + (1.0 / densidade2); 

    printf("\n");

    //printf("------Carta 2------:\n");
    //printf("Estado: %c \n", estado2);
    //printf("Código da Carta: %s \n", codigo_da_carta2);
    //printf("Nome da Cidade: %s\n", nome_da_cidade2);
    //printf("População: %d \n", populacao2);
    //printf("Área (em Km): %.2f \n", area2);
    //printf("PIB: %.2f bilhões de reais\n", pib2);
    //printf("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);
    //printf("Densidade Populacional: %.2f hab/Km \n", densidade2);
    //printf("PIB per Capita: %.2f reais \n", capital2);

     // Comparação das cartas
     printf("Comparação de Cartas:\n");
     
     printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
     printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
     printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
     printf("Pontos Turísticos: Carta %d venceu\n", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 2);
     printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2); //a densidade populacional, a carta com o menor valor vence;
     printf("PIB per Capita: Carta %d venceu\n", capital1 > capital2 ? 1 : 2);
     printf("Super Poder: Carta %d venceu\n", super_poder1 > super_poder2 ? 1 : 2);
     return 0;
}
