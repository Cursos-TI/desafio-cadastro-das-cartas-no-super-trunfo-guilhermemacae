#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio SuperTrunfo!\n");
    char codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    int populacao1, turistico1, populacao2, turistico2;
    float area1, area2, PIB1, PIB2;

    printf("Digite o código da primeira cidade: ");
    scanf("%d", &codigo1);

    printf("Digite a primeira cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da primeira cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &turistico1);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
