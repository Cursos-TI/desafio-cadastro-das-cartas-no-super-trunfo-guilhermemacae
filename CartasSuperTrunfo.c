#include <stdio.h>

int main() {
    printf("Desafio SuperTrunfo!\n");
    printf("\n");
    // Criação das variáveis
    char letra1, letra2;
    char codigo1[10], codigo2[10];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float percap1, percap2;

    // Entrada de dados da primeira carta

    printf("Insira as informações da Primeira Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf(" %c", &letra1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);
    printf("\n");

    //Entrada de dados da segunda carta

    printf("Insira as informações da Segunda Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf(" %c", &letra2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);
    printf("\n");
    
    // Exibição dos dados da primeira carta 
    
    printf("Carta 1: \n");
    printf("Codigo da Carta 1: %c%s \n", letra1,codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d milhões \n", populacao1);
    populacao1 *= 1000000;
    printf("Área: %.3f km2\n", area1);
    printf("PIB: R$%.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d \n", turistico1);
    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    percap1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %.2f reais\n", percap1);
    printf("\n");

    // Exibição dos dados da segunda carta 

    printf("Carta 2: \n");
    printf("Codigo da Carta 2: %c%s \n", letra2,codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d milhões \n", populacao2);
    populacao2 *= 1000000;
    printf("Área: %.3f km2\n", area2);
    printf("PIB: R$%.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d \n", turistico2);
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    percap2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %.2f reais\n", percap2);
    printf("\n");
    return 0;
}