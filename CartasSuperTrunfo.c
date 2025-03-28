#include <stdio.h>

int main() {
    printf("Desafio SuperTrunfo!\n");
    printf("\n");
    // Criação das variáveis
    char letra1, letra2;
    char codigo1[10], codigo2[10];
    char cidade1[10], cidade2[10];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float percap1, percap2;
    float superPoder1, superPoder2;
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoTuristico;
    int resultadoDesidade;
    int resultadoPercap;
    int resultadoSuperpoder;

    // Entrada de dados da primeira carta

    printf("Insira as informações da Primeira Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf(" %c", &letra1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população (milhões): ");
    scanf("%f", &populacao1);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);
    
    populacao1 *= 1000000;
    // Calculando a densidade da primeira cidade
    densidade1 = (float) populacao1 / area1;
    
    pib1 *= 1000000000;
    // Calculando o percapta da primeira cidade
    percap1 = (float) pib1 / populacao1;

    // Calculo super poder carta 1
    superPoder1 = populacao1 + area1 + pib1 + turistico1 + percap1 + (1 / densidade1);
    
    printf("\n");

    // Entrada de dados da segunda carta

    printf("Insira as informações da Segunda Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf(" %c", &letra2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população (milhões): ");
    scanf("%f", &populacao2);
  
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    // Calculando a densidade da segunda cidade
    populacao2 *= 1000000;
    densidade2 = (float) populacao2 / area2;                           
        
    // Calculando o percapta da segunda cidade
    pib2 *= 1000000000;
    percap2 = (float) pib2 / populacao2;

    
    // Calculo super poder carta 2
    superPoder2 = populacao2 + area2 + pib2 + turistico2 + percap2 + (1 / densidade2);
    printf("\n");
    
    // Exibição dos dados da primeira carta 
    
    printf("Carta 1: \n");
    printf("Codigo da Carta 1: %c%s \n", letra1,codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %.0f Milhões\n", populacao1 / 1000000);
    printf("Área: %.1f km2\n", area1);
    printf("PIB: %.0f Bilhões de reais\n", pib1 / 1000000000);
    printf("Pontos turísticos: %d \n", turistico1);
    printf("PIB per Capita: R$%.2f reais\n", percap1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Super Poder Cartra 1: %.0f \n", superPoder1);
    printf("\n");
    
    // Exibição dos dados da segunda carta 

    printf("Carta 2: \n");
    printf("Codigo da Carta 2: %c%s \n", letra2,codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %.0f Milhões\n", populacao2 / 1000000);
    printf("Área: %.1f km2\n", area2);
    printf("PIB: %.0f Bilhões de reais\n", pib2 / 1000000000);
    printf("Pontos turísticos: %d \n", turistico2);
    printf("PIB per Capita: R$%.2f reais\n", percap2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Super Poder Cartra 2: %.0f \n", superPoder2);
    printf("\n");

    // Calculo para comparação
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoTuristico = turistico1 > turistico2;
    resultadoDesidade = densidade1 < densidade2; // a carta com menor valor vence
    resultadoPercap = percap1 > percap2;
    resultadoSuperpoder = superPoder1 > superPoder2;

    // Exibição da comparação

    printf("Comparação dos resultados: \n");

    printf("A maior população é da carta: %s\n", resultadoPopulacao ? cidade1 : cidade2);
    printf("A maior área é da carta: %s\n", resultadoArea ? cidade1 : cidade2);
    printf("O maior Pib é da carta: %s\n", resultadoPib ? cidade1 : cidade2);
    printf("A maior quantidade de pontos turisticos é da carta: %s\n", resultadoTuristico ? cidade1 : cidade2);
    printf("A menor densidade demográfica é da carta: %s\n", resultadoDesidade ? cidade1 : cidade2);
    printf("O maior Pib PerCapta é da carta: %s\n", resultadoPercap ? cidade1 : cidade2);
    printf("O maior Super Poder é da carta: %s\n" , resultadoSuperpoder ? cidade1 : cidade2);

    printf("\n");
    return 0;
}