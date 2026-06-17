#include <stdio.h>
#include <stdbool.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  /*
  char estado1[20];
  char codigo1[5];
  char nomeCidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int qtPontosTuristicos1;

  char estado2[20];
  char codigo2[5];
  char nomeCidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int qtPontosTuristicos2;
  */
  /*-- AREA DE DADOS PREENCHIDOS COMENTE PARA TESTAR --*/
  char estado1[20] = "São Paulo";
  char codigo1[5] = "A01";
  char nomeCidade1[20] = "São Paulo";
  int populacao1 = 12325000;
  float area1 = 1521.11;
  long double pib1 = 699280000000;
  int qtPontosTuristicos1 = 50;

  char estado2[20] = "RIO DE JANEIRO";
  char codigo2[5] = "B02";
  char nomeCidade2[20] = "RIO DE JANEIRO";
  int populacao2 = 6748000;
  float area2 = 1200.25;
  long double pib2 = 300500000000;
  int qtPontosTuristicos2 = 30;

  // Área para entrada de dados da carta 1
  /*----------- Dados Carta 1 -------------*/
  /*
  printf("Nome do estado:\n");
  scanf(" %[^\n]s", estado1);

  printf("Codigo:\n");
  scanf(" %s", codigo1);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]s", nomeCidade1);

  printf("Populacao:\n");
  scanf(" %d", &populacao1);

  printf("Area:\n");
  scanf(" %f", &area1);

  printf("PIB:\n");
  scanf(" %f", &pib1);

  printf("Quantidade de pontos turisticos:\n");
  scanf(" %d", &qtPontosTuristicos1);
  */

  // calculo de variáveis

  float densidadePopulacional1 = (float) populacao1 / area1;

  float pibPerCapta1 = (float) pib1 / populacao1;

  float super1 = (float) populacao1 + area1 + pib1 + qtPontosTuristicos1 + pibPerCapta1 + (1/densidadePopulacional1);

  // Área para exibição dos dados da carta 1

  printf("\n--- DADOS DA CARTA 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2Lf\n", pib1);
  printf("Pontos Turisticos: %d\n", qtPontosTuristicos1);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
  printf("PIB per Capta: %.2f\n", pibPerCapta1);
  printf("Super Poder: %.2f\n", super1);


  // Área para entrada de dados da carta 2
  /*----------- Dados Carta 2 -------------*/
  /*
  printf("Nome do estado:\n");
  scanf(" %[^\n]s", estado2);

  printf("Codigo:\n");
  scanf(" %s", codigo2);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]s", nomeCidade2);

  printf("Populacao:\n");
  scanf(" %d", &populacao2);

  printf("Area:\n");
  scanf(" %f", &area2);

  printf("PIB:\n");
  scanf(" %f", &pib2);

  printf("Quantidade de pontos turisticos:\n");
  scanf(" %d", &qtPontosTuristicos2);
  */

  // área de calculo de variáveis
  float densidadePopulacional2 = (float) populacao2 / area2;
  
  float pibPerCapta2 = (float) pib2 / populacao2;

  float super2 = (float) populacao2 + area2 + pib2 + qtPontosTuristicos2 + pibPerCapta2 + (1/densidadePopulacional2);

  // Área para exibição dos dados da carta 2

  printf("\n--- DADOS DA CARTA 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2lf\n", pib2);
  printf("Pontos Turisticos: %d\n", qtPontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
  printf("PIB per Capta: %.2f\n", pibPerCapta2);
  printf("Super Poder: %.2f\n", super2);


  // comparação de cartas
  /*
  bool resultadoPopulacao = populacao1 > populacao2;
  bool resultadoArea = area1 > area2;
  bool resultadoPib = pib1 > pib2;
  bool resultadoQtPontosTuristicos = qtPontosTuristicos1 > qtPontosTuristicos2;
  bool resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
  bool resultadoPibPerCapta = pibPerCapta1 > pibPerCapta2;
  bool resultadoSuper = super1 > super2;
  */

  // exibição do resultado da comparação
  int opcao;

  printf("---------------- ESCOLHA UMA OPÇÃO ----------------\n");
  printf("1 - COMPARAR POPULAÇAO\n");
  printf("2 - COMPARAR ÁREA\n");
  printf("3 - COMPARAR PIB\n");
  printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
  printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
  printf("6 - COMPARAR PIB PER CAPTA\n");
  printf("7 - COMPARAR SUPER PODER\n");
  
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
          printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
    case 2:
      if (area1 > area2) {
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
    case 3:
      if (pib1 > pib2) {
        printf("Carta 1 - %s: %.2lf\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2lf\n", nomeCidade2, pib2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %.2lf\n", nomeCidade1, pib1);
          printf("Carta 2 - %s: %.2lf\n", nomeCidade2, pib2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
    case 4:
      if (qtPontosTuristicos1 > qtPontosTuristicos2) {
        printf("Carta 1 - %s: %d\n", nomeCidade1, qtPontosTuristicos1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, qtPontosTuristicos2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %d\n", nomeCidade1, qtPontosTuristicos1);
          printf("Carta 2 - %s: %d\n", nomeCidade2, qtPontosTuristicos2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
    case 5:
      if ((1 / densidadePopulacional1) < (1 / densidadePopulacional2)) {
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidadePopulacional2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidadePopulacional1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidadePopulacional2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
    case 6:
      if (pibPerCapta1 > pibPerCapta2) {
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapta1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapta2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapta1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapta2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
    case 7:
      if (super1 > super2) {
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, super1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, super2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, super1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, super2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      }
      break;
  }


  /*
  printf("\n--- CARTA 1 VS CARTA 2 ---\n");
  if (populacao1 > populacao2) {
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
    printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
  }

  */
  
  /*
  printf("\n--- CARTA 1 VS CARTA 2 ---\n");
  printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoQtPontosTuristicos);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidadePopulacional);
  printf("PIB per Capta: Carta 1 venceu (%d)\n", resultadoPibPerCapta);
  printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuper);
  */
return 0;
}
