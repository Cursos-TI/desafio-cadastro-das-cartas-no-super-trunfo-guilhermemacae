#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio SuperTrunfo!\n");
    printf("\n");
    // Criação das variáveis
    char letra1, letra2;
    char codigo1[3], codigo2[3];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    // Entrada de dados da primeira carta

    printf("Insira as informações da Primeira Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf("%c", &letra1);

    printf("Digite o código: ");
    scanf("%s", &codigo1);

    printf("Digite o nome: ");
    scanf("%s", &cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);
    printf("\n");

    // Exibição dos dados da primeira carta 
    
    printf("Carta 1: \n");
    printf("Codigo da Carta1: %c%s \n", letra1,codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d milhões \n", populacao1);
    printf("Área: %.3f km2\n", area1);
    printf("PIB: R$%.3f \n", pib1);
    printf("Pontos turísticos: %d \n", turistico1);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    return 0;
}
