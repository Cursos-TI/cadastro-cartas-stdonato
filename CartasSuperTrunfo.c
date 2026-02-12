#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;            // Letra de A a H
  char codigo_carta[4];   // Letra do estado seguida de um número de 01 a 04. ex: A01
  char nome_cidade[25];   // Nome da cidade sem espaços
  int populacao;          // Numero de habitantes da cidade
  float area_cidade;      // Area da cidade em quilometros quadrados
  float pib_cidade;       // PIB da cidade
  int pontos_turisticos;   // Numero de pontos turisticos da cidade

  // Área para entrada de dados
  printf("Cadastro de Cartas - Super Trunfo C \n\n");
  printf("Carta 1: \n");

  printf("Informe o Estado (1 letra de A a H): \n");
  scanf("%c", &estado);

  printf("Código da carta (letra + número de 01 a 04): \n");
  scanf("%s", codigo_carta);

  printf("Nome da Cidade (sem espaços): \n");
  scanf("%s", nome_cidade);

  printf("População da Cidade: \n");
  scanf("%d", &populacao);

  printf("Área da Cidade (em km quadrados): \n");
  scanf("%f", &area_cidade);

  printf("PIB da Cidade: \n");
  scanf("%f", &pib_cidade);

  printf("Número de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\nCarta 1: \n\n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigo_carta);
  printf("Nome da Cidade: %s \n", nome_cidade);
  printf("População: %d habitantes \n", populacao);
  printf("Área: %.2f km2 \n", area_cidade);
  printf("PIB: %.2f bilhões de reais \n", pib_cidade);
  printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);


return 0;
} 
