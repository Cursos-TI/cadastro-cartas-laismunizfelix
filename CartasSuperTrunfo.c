#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
// Variáveis para a CARTA 1
    char estado1;
    char codigo_carta1[5];     // Ex: A01
    char nome_cidade1[50];
    int populacao1;
    float area1;               // em km²
    float pib1;                // em bilhões de reais
    int pontos_turisticos1;

    // Variáveis para a CARTA 2
    char estado2;
    char codigo_carta2[5];     // Ex: B02
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
  // Área para entrada de dados

  // - ENTRADA DE DADOS - CARTA 1 -

    printf("--- CADASTRO CARTA 1 ---\n");
    
    printf("1. Estado (A a H): ");
    scanf(" %c", &estado1); // O espaco antes do %c resolve problemas com o 'Enter'

    printf("2. Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", nome_cidade1);

    printf("4. Populacao: ");
    scanf("%d", &populacao1);

    printf("5. Area (em km²): ");
    scanf("%f", &area1);

    printf("6. PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("7. Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);


    // --- ENTRADA DE DADOS - CARTA 2 ---

    printf("\n--- CADASTRO CARTA 2 ---\n");
    
    printf("1. Estado (A a H): ");
    scanf(" %c", &estado2); 

    printf("2. Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("3. Nome da Cidade (sem espacos): ");
    scanf("%s", nome_cidade2);

    printf("4. Populacao: ");
    scanf("%d", &populacao2);

    printf("5. Area (em km²): ");
    scanf("%f", &area2);

    printf("6. PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("7. Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade

printf("\n=\n");
    printf("       DADOS DAS CARTAS CADASTRADAS\n");
    printf("=\n");

    // --- EXIBIÇÃO - CARTA 1 ---
    printf("\n*** CARTA 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // %.2f exibe 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    
    // --- EXIBIÇÃO - CARTA 2 ---
    printf("\n*** CARTA 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("=\n");

return 0;
}
