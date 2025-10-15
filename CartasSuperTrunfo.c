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
        float densiPopula0, densiPopula1; // Calcula a densidade populacional.
        float pibCapta0, pibCapta1; // Calcula PIB per capta.
        float superPoder0, superPoder1; // Calcula Super Poder
        int resultPop, resultArea, resultPib, resultTurist, resultDensi, resultCapta, resultSP;
        float densiInversa0, densiInversa1;
 
        // leitura dos dados da primeira carta.
        printf("Digite os dados da primeira carta \n");
        printf("Digite o Estado: \n");
        scanf("%s", estado0);

        printf("Digite o codigo da carta: \n");
        scanf("%s", codigocarta0);

        printf("Digite o nome da cidade: \n");
        scanf(" %20[^\n]", nomecidade0);

        printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao0);

        printf("Digite a area: \n");
        scanf("%f", &area0);
        
        printf("Digite o produto interno bruto: \n");
        scanf("%f", &pib0);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos0);

        // ** Nível aventureiro **

        densiPopula0 = populacao0 / area0;
        pibCapta0 = (pib0 * 1000000000.0) / populacao0;

        // Leitura dos dados da segunda carta.
        printf("Digite os dados da segunda carta \n");
        printf("Digite o Estado: \n");
        scanf("%s", estado1);

        printf("Digite o codigo da carta: \n");
        scanf("%s", codigocarta1);

        printf("Digite o nome da cidade: \n");
        scanf(" %20[^\n]", nomecidade1);

        printf("Digite a populacao da cidade: \n");
        scanf("%d", &populacao1);

        printf("Digite a area: \n");
        scanf("%f", &area1);
        
        printf("Digite o produto interno bruto: \n");
        scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turisticos: \n");
        scanf("%d", &pontosturisticos1);

        // ** Nível aventureiro **

        densiPopula1 = populacao1 / area1;
        pibCapta1 = (pib1 * 1000000000.0) / populacao1;

        // ** Nível mestre **

        densiInversa0 = 1 / densiPopula0;
        densiInversa1 = 1 / densiPopula1;
        
        // Vamos incrementar com o Super Poder
        superPoder0 = (float) populacao0 + area0 + pib0 + (float) pontosturisticos0 + pibCapta0 + densiInversa0;
        superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibCapta1 + densiInversa1;

        // Dados das Cartas 1 e 2

        printf("Carta 1: \nEstado: %s \n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km²\n PIB: %.2f bilhões de reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: %.2f reais\n Super Poder: %.2f\n", estado0, codigocarta0, nomecidade0, populacao0, area0, pib0, pontosturisticos0, densiPopula0, pibCapta0, superPoder0);
        printf("Carta 2: \nEstado: %s \n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km²\n PIB: %.2f bilhões de reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: %.2f reais\n Super Poder: %.2f\n", estado1, codigocarta1, nomecidade1, populacao1, area1, pib1, pontosturisticos1, densiPopula1, pibCapta1, superPoder1);

        // comparar resultados das cartas, resultado "1" carta "A" ganha, resultado "0" carta "B" ganha.
        resultPop = populacao0 > populacao1;
        resultArea = area0 > area1;
        resultPib = pib0 > pib1;
        resultTurist = pontosturisticos0 > pontosturisticos1;
        resultDensi = densiPopula0 > densiPopula1;
        resultCapta = pibCapta0 > pibCapta1;
        resultSP = superPoder0 > superPoder1;
        
        printf("O resultado da comparação entre a População da carta A e B é: %d\n", resultPop);
        printf("O resultado da comparação entre a Área da carta A e B é: %d\n", resultArea);
        printf("O resultado da comparação entre a PIB da carta A e B é: %d\n", resultPib);
        printf("O resultado da comparação entre a Pontos Turísticos da carta A e B é: %d\n", resultTurist);
        printf("O resultado da comparação entre a Densidade Populacional A e B é: %d\n", resultDensi);
        printf("O resultado da comparação entre a PIB per Capta da carta A e B é: %d\n", resultCapta);
        printf("O resultado da comparação entre a Super Poder da carta A e B é: %d\n", resultSP);
       
return 0;
} 
