#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20];
  char codigo1[5];
  char nomeCidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int qtPontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapta1;

  char estado2[20];
  char codigo2[5];
  char nomeCidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int qtPontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapta2;

  // Área para entrada de dados da carta 1
  /*----------- Dados Carta 1 -------------*/
  printf("Nome do estado:\n");
  scanf(" %[^\n]s", &estado1);

  printf("Codigo:\n");
  scanf(" %s", &codigo1);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]s", &nomeCidade1);

  printf("Populacao:\n");
  scanf(" %d", &populacao1);

  printf("Area:\n");
  scanf(" %f", &area1);

  printf("PIB:\n");
  scanf(" %f", &pib1);

  printf("Quantidade de pontos turisticos:\n");
  scanf(" %d", &qtPontosTuristicos1);

  // calculo de variáveis

  densidadePopulacional1 = (float) populacao1 / area1;
  pibPerCapta1 = (float) pib1 / populacao1;

  // Área para exibição dos dados da carta 1

  printf("\n--- DADOS DA CARTA 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", qtPontosTuristicos1);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
  printf("PIB per Capta: %.2f\n", pibPerCapta1);



  // Área para entrada de dados da carta 2
  /*----------- Dados Carta 2 -------------*/

   printf("Nome do estado:\n");
  scanf(" %[^\n]s", &estado2);

  printf("Codigo:\n");
  scanf(" %s", &codigo2);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]s", &nomeCidade2);

  printf("Populacao:\n");
  scanf(" %d", &populacao2);

  printf("Area:\n");
  scanf(" %f", &area2);

  printf("PIB:\n");
  scanf(" %f", &pib2);

  printf("Quantidade de pontos turisticos:\n");
  scanf(" %d", &qtPontosTuristicos2);


  // área de calculo de variáveis
  densidadePopulacional2 = (float) populacao2 / area2;
  pibPerCapta2 = (float) pib2 / populacao2;

  // Área para exibição dos dados da carta 2

  printf("\n--- DADOS DA CARTA 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", qtPontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
  printf("PIB per Capta: %.2f\n", pibPerCapta2);

return 0;
}
