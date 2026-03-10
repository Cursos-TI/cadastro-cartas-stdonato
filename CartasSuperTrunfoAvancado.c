#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Stevenes Donato - Curso ADS - 2026.1

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2;                      // 1 Letra de A a H
  char codigo_carta[4], codigo_carta2[4];    // Letra do estado seguida de um número de 01 a 04. ex: A01
  char nome_cidade[25], nome_cidade2[25];    // Nome da cidade sem espaços
  int populacao, populacao2;                 // Numero de habitantes da cidade
  float area_cidade, area_cidade2;           // Area da cidade em quilometros quadrados
  float pib_cidade, pib_cidade2;             // PIB da cidade
  int pontos_turisticos, pontos_turisticos2; // Numero de pontos turisticos da cidade
  float densidade, densidade2;               // Densidade populacional
  float pib_pc, pib_pc2;                     // PIB per capita da cidade
  
  // Resultados das comparações
  int resultado_populacao;                   // Resultado população
  int resultado_area;                        // Resultado Àrea da cidade
  int resultado_pib;                         // Resultado PIB
  int resultado_pontos_turisticos;           // Resultado pontos turisticos
  int resultado_densidade;                   // Resultado densidade populacional
  int resultado_pib_pc;                      // Resultado PIB per capita
  float super_poder, super_poder2;           // Soma dos atributos numéricos
  float resultado_super_poder;               // Resultado super poder

  // Código para dados da primeira carta
  // Área para entrada de dados - Carta 1
  printf("Cadastro de Cartas - Super Trunfo C \n\n");
  printf("Carta 1: \n");

  printf("Informe o Estado (1 letra de A a H): ");
  scanf("%c", &estado);

  printf("Código da carta (1 letra + número de 01 a 04): ");
  scanf("%s", codigo_carta);

  printf("Nome da Cidade (sem espaços): ");
  scanf("%s", nome_cidade);

  printf("População da Cidade: ");
  scanf("%d", &populacao);

  printf("Área da Cidade (em km quadrados): ");
  scanf("%f", &area_cidade);

  printf("PIB da Cidade (em bilhões de reais): ");
  scanf("%f", &pib_cidade);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos);

  densidade = (populacao / area_cidade);
  pib_pc = (pib_cidade * 1000000000) / populacao;

  // Código para dados da segunda carta
  // Área para entrada de dados - Carta 2
  printf("\nCadastro de Cartas - Super Trunfo C \n\n");
  printf("Carta 2: \n");

  printf("Informe o Estado (1 letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Código da carta (1 letra + número de 01 a 04): ");
  scanf("%s", codigo_carta2);

  printf("Nome da Cidade (sem espaços): ");
  scanf("%s", nome_cidade2);

  printf("População da Cidade: ");
  scanf("%d", &populacao2);

  printf("Área da Cidade (em km quadrados): ");
  scanf("%f", &area_cidade2);

  printf("PIB da Cidade (em bilhões de reais): ");
  scanf("%f", &pib_cidade2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pontos_turisticos2);

  densidade2 = (populacao2 / area_cidade2);
  pib_pc2 = (pib_cidade2 * 1000000000) / populacao2;

// Área para exibição dos dados da cidade
  printf("\nCartas cadastradas: \n");

// Área para exibição dos dados da cidade - Carta 1
  printf("\nCarta 1: \n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigo_carta);
  printf("Nome da Cidade: %s \n", nome_cidade);
  printf("População: %d habitantes \n", populacao);
  printf("Área: %.2f km2 \n", area_cidade);
  printf("PIB: %.2f bilhões de reais \n", pib_cidade);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);
  printf("Densidade populacional: %.2f hab/km2 \n", densidade);
  printf("PIB per capita: %.2f reais \n\n", pib_pc);


  // Área para exibição dos dados da cidade - Carta 2
  printf("\nCarta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo_carta2);
  printf("Nome da Cidade: %s \n", nome_cidade2);
  printf("População: %d habitantes \n", populacao2);
  printf("Área: %.2f km2 \n", area_cidade2);
  printf("PIB: %.2f bilhões de reais \n", pib_cidade2);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
  printf("Densidade populacional: %.2f hab/km2 \n", densidade2);
  printf("PIB per capita: %.2f reais \n\n", pib_pc2);

  // Resultados das comparações
  printf("\nComparação de Cartas: \n\n");  
  printf("Se 1 - Carta 1 venceu \n");
  printf("Se 0 - Carta 2 venceu. \n\n");
  
  resultado_populacao = populacao > populacao2;
  printf("População: (%d) \n", resultado_populacao);
  
  resultado_area = area_cidade > area_cidade2;
  printf("Àrea: (%d) \n", resultado_area);

  resultado_pib = pib_cidade > pib_cidade2;
  printf("PIB: (%d) \n", resultado_pib);

  resultado_pontos_turisticos = pontos_turisticos > pontos_turisticos2;
  printf("Pontos turíticos: (%d) \n", resultado_pontos_turisticos);

  resultado_densidade = densidade < densidade2;          // Menor densidade vence
  printf("Densidade populacional: (%d) \n", resultado_densidade);

  resultado_pib_pc = pib_pc > pib_pc2;
  printf("PIB per capita: (%d) \n", resultado_pib_pc);

  //Calculo do super poder
  super_poder = ((float)populacao + area_cidade + pib_cidade + (float)pontos_turisticos + pib_pc) + 1/densidade;
  super_poder2 = ((float)populacao2 + area_cidade2 + pib_cidade2 + (float)pontos_turisticos2 + pib_pc2) + 1/densidade2;

  resultado_super_poder = super_poder > super_poder2;
  printf("Super Poder: (%.0f) \n", resultado_super_poder);
   
return 0;
} 