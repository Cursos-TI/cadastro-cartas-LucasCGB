#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/*Jogo Super Trunfo, ele ira coletar informacoes sobre cartas e posteriormente compara-las,
 aqui serao coletados dados de apenas duas cartas.*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade
        char estado0[20], estado1[20]; // Uma letra de 'A' a 'B'.
        char codigocarta0[20], codigocarta1[20]; // A letra do estado seguida de um numero de 01 a 02.
        char nomecidade0[20], nomecidade1[20]; // O nome da cidade.
        int populacao0, populacao1; // O número de habitantes da cidade.
        float area0, area1; // A area da cidade em quilometros quadrados.
        float pib0, pib1; // O Produto Interno Bruto da cidade.
        int pontosturisticos0, pontosturisticos1; //A quantidade de pontos turisticos na cidade.

        // Cidade 1.
        printf("Digite o Estado da primeira carta: \n");
        scanf("%s", estado0);

        printf("Digite o codigo da carta: \n");
        scanf("%s", codigocarta0);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nomecidade0);

        printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao0);

        printf("Digite a area: \n");
        scanf("%f", &area0);
        
        printf("Digite o produto interno bruto: \n");
        scanf("%f", &pib0);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos0);

        // Cidade 2.
        printf("Digite o Estado da Segunda carta: \n");
        scanf("%s", estado1);

        printf("Digite o codigo da carta: \n");
        scanf("%s", codigocarta1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", nomecidade1);

        printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao1);

        printf("Digite a area: \n");
        scanf("%f", &area1);
        
        printf("Digite o produto interno bruto: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos1);

        // Cartas 1 e 2

        printf("Estado: %s \n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %f\n PIB: %f\n Numero de Pontos Turisticos: %d\n", estado0, codigocarta0, nomecidade0, populacao0, area0, pib0, pontosturisticos0);
        printf("Estado: %s \n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %f\n PIB: %f\n Numero de Pontos Turisticos: %d\n", estado1, codigocarta1, nomecidade1, populacao1, area1, pib1, pontosturisticos1);

return 0;
} 
