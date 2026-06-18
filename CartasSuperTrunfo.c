#include <stdio.h>
#include <stdbool.h>


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
  long double pib1;
  int qtPontosTuristicos1;

  char estado2[20];
  char codigo2[5];
  char nomeCidade2[20];
  int populacao2;
  float area2;
  long double pib2;
  int qtPontosTuristicos2;
  
  /*-- AREA DE DADOS PREENCHIDOS COMENTE PARA TESTAR --*/
  /*
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
  */

  // Área para entrada de dados da carta 1
  /*----------- Dados Carta 1 -------------*/
 
  printf("Nome do estado:\n");
  scanf(" %[^\n]", estado1);

  printf("Codigo:\n");
  scanf(" %s", codigo1);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]", nomeCidade1);

  printf("Populacao:\n");
  scanf(" %d", &populacao1);

  printf("Area:\n");
  scanf(" %f", &area1);

  printf("PIB:\n");
  scanf(" %Lf", &pib1);

  printf("Quantidade de pontos turisticos:\n");
  scanf(" %d", &qtPontosTuristicos1);
 

  // calculo de variáveis

  float densidadePopulacional1 = (float) populacao1 / area1;

  long double pibPerCapta1 = (long double) pib1 / populacao1;

  long double super1 = (long double) populacao1 + area1 + pib1 + qtPontosTuristicos1 + pibPerCapta1 + (1.0/densidadePopulacional1);

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
  printf("PIB per Capta: %.2Lf\n", pibPerCapta1);
  printf("Super Poder: %.2Lf\n", super1);


  // Área para entrada de dados da carta 2
  /*----------- Dados Carta 2 -------------*/

  printf("Nome do estado:\n");
  scanf(" %[^\n]", estado2);

  printf("Codigo:\n");
  scanf(" %s", codigo2);

  printf("Nome da Cidade:\n");
  scanf(" %[^\n]", nomeCidade2);

  printf("Populacao:\n");
  scanf(" %d", &populacao2);

  printf("Area:\n");
  scanf(" %f", &area2);

  printf("PIB:\n");
  scanf(" %Lf", &pib2);

  printf("Quantidade de pontos turisticos:\n");
  scanf(" %d", &qtPontosTuristicos2);


  // área de calculo de variáveis
  float densidadePopulacional2 = (float) populacao2 / area2;
  
  long double pibPerCapta2 = (long double) pib2 / populacao2;

  long double super2 = (long double) populacao2 + area2 + pib2 + qtPontosTuristicos2 + pibPerCapta2 + (1.0/densidadePopulacional2);

  // Área para exibição dos dados da carta 2

  printf("\n--- DADOS DA CARTA 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2Lf\n", pib2);
  printf("Pontos Turisticos: %d\n", qtPontosTuristicos2);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
  printf("PIB per Capta: %.2Lf\n", pibPerCapta2);
  printf("Super Poder: %.2Lf\n", super2);


  // comparação de cartas
  int opcao1;
  int opcao2;

  printf("---------------- ESCOLHA O PRIMEIRO ATRIBUTO ----------------\n");
  printf("1 - COMPARAR POPULAÇAO\n");
  printf("2 - COMPARAR ÁREA\n");
  printf("3 - COMPARAR PIB\n");
  printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
  printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
  printf("6 - COMPARAR PIB PER CAPTA\n");
  printf("7 - COMPARAR SUPER PODER\n");

  scanf("%d", &opcao1);

  switch (opcao1)  {
    case 1:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("2 - COMPARAR ÁREA\n");
      printf("3 - COMPARAR PIB\n");
      printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
      printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
      printf("6 - COMPARAR PIB PER CAPTA\n");
      printf("7 - COMPARAR SUPER PODER\n");

      scanf("%d", &opcao2);

      switch (opcao2) {
        case 2:
          (populacao1 + area1 > populacao2 + area2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (populacao1 + area1 < populacao2 + area2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 3:
          (populacao1 + pib1 > populacao2 + pib2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (populacao1 + pib1 < populacao2 + pib2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 4:
          (populacao1 + qtPontosTuristicos1 > populacao2 + qtPontosTuristicos2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (populacao1 + qtPontosTuristicos1 < populacao2 + qtPontosTuristicos2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 5:
          (populacao1 + 1.0/densidadePopulacional1 > populacao2 + 1.0/densidadePopulacional2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (populacao1 + 1.0/densidadePopulacional1 < populacao2 + 1.0/densidadePopulacional2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 6:
          (populacao1 + pibPerCapta1 > populacao2 + pibPerCapta2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (populacao1 + pibPerCapta1 < populacao2 + pibPerCapta2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 7:
          (populacao1 + super1 > populacao2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (populacao1 + super1 < populacao2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        default:
          printf("Opção inválida!\n");
        break;
      }
      break;
    
    case 2:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("1 - COMPARAR POPULAÇAO\n");
      printf("3 - COMPARAR PIB\n");
      printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
      printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
      printf("6 - COMPARAR PIB PER CAPTA\n");
      printf("7 - COMPARAR SUPER PODER\n");

      scanf("%d", &opcao2);

      switch (opcao2) {
        case 1:
          (area1 + populacao1 > area2 + populacao2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (area1 + populacao1 < area2 + populacao2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 3:
          (area1 + pib1 > area2 + pib2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (area1 + pib1 < area2 + pib2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 4:
          (area1 + qtPontosTuristicos1 > area2 + qtPontosTuristicos2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (area1 + qtPontosTuristicos1 < area2 + qtPontosTuristicos2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 5:
          (area1 + 1.0/densidadePopulacional1 > area2 + 1.0/densidadePopulacional2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (area1 + 1.0/densidadePopulacional1 < area2 + 1.0/densidadePopulacional2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 6:
          (area1 + pibPerCapta1 > area2 + pibPerCapta2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (area1 + pibPerCapta1 < area2 + pibPerCapta2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
      case 7:
          (area1 + super1 > area2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (area1 + super1 < area2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
      default:
          printf("Opção inválida!\n");
        break;
      }
      break;

    case 3:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("1 - COMPARAR POPULAÇAO\n");
      printf("2 - COMPARAR ÁREA\n");
      printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
      printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
      printf("6 - COMPARAR PIB PER CAPTA\n");
      printf("7 - COMPARAR SUPER PODER\n");

      scanf("%d", &opcao2);

      switch (opcao2) {
        case 1:
          (pib1 + populacao1 > pib2 + populacao2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pib1 + populacao1 < pib2 + populacao2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 2:
          (pib1 + area1 > pib2 + area2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pib1 + area1 < pib2 + area2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 4:
          (pib1 + qtPontosTuristicos1 > pib2 + qtPontosTuristicos2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pib1 + qtPontosTuristicos1 < pib2 + qtPontosTuristicos2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 5:
          (pib1 + 1.0/densidadePopulacional1 > pib2 + 1.0/densidadePopulacional2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pib1 + 1.0/densidadePopulacional1 < pib2 + 1.0/densidadePopulacional2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 6:
          (pib1 + pibPerCapta1 > pib2 + pibPerCapta2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pib1 + pibPerCapta1 < pib2 + pibPerCapta2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 7:
          (pib1 + super1 > pib2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pib1 + super1 < pib2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        default:
          printf("Opção inválida!\n");
        break;
      }
      break;
    
    case 4:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("1 - COMPARAR POPULAÇAO\n");
      printf("2 - COMPARAR ÁREA\n");
      printf("3 - COMPARAR PIB\n");
      printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
      printf("6 - COMPARAR PIB PER CAPTA\n");
      printf("7 - COMPARAR SUPER PODER\n");
      
      scanf("%d", &opcao2);

      switch (opcao2) {
        case 1:
          (qtPontosTuristicos1 + populacao1 > qtPontosTuristicos2 + populacao2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (qtPontosTuristicos1 + populacao1 < qtPontosTuristicos2 + populacao2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 2:
          (qtPontosTuristicos1 + area1 > qtPontosTuristicos2 + area2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (qtPontosTuristicos1 + area1 < qtPontosTuristicos2 + area2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 3:
          (qtPontosTuristicos1 + pib1 > qtPontosTuristicos2 + pib2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (qtPontosTuristicos1 + pib1 < qtPontosTuristicos2 + pib2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 5:
          (qtPontosTuristicos1 + 1.0/densidadePopulacional1 > qtPontosTuristicos2 + 1.0/densidadePopulacional2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (qtPontosTuristicos1 + 1.0/densidadePopulacional1 < qtPontosTuristicos2 + 1.0/densidadePopulacional2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 6:
          (qtPontosTuristicos1 + pibPerCapta1 > qtPontosTuristicos2 + pibPerCapta2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (qtPontosTuristicos1 + pibPerCapta1 < qtPontosTuristicos2 + pibPerCapta2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 7:
          (qtPontosTuristicos1 + super1 > qtPontosTuristicos2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (qtPontosTuristicos1 + super1 < qtPontosTuristicos2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        default:
          printf("Opção inválida!\n");
        break;
      }
      break;
    case 5:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("1 - COMPARAR POPULAÇAO\n");
      printf("2 - COMPARAR ÁREA\n");
      printf("3 - COMPARAR PIB\n");
      printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
      printf("6 - COMPARAR PIB PER CAPTA\n");
      printf("7 - COMPARAR SUPER PODER\n");
      
      scanf("%d", &opcao2);
      
      switch (opcao2) {
        case 1:
          (1.0/densidadePopulacional1 + populacao1 > 1.0/densidadePopulacional2 + populacao2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (1.0/densidadePopulacional1 + populacao1 < 1.0/densidadePopulacional2 + populacao2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 2:
          (1.0/densidadePopulacional1 + area1 > 1.0/densidadePopulacional2 + area2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (1.0/densidadePopulacional1 + area1 < 1.0/densidadePopulacional2 + area2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 3:
          (1.0/densidadePopulacional1 + pib1 > 1.0/densidadePopulacional2 + pib2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (1.0/densidadePopulacional1 + pib1 < 1.0/densidadePopulacional2 + pib2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 4:
          (1.0/densidadePopulacional1 + qtPontosTuristicos1 > 1.0/densidadePopulacional2 + qtPontosTuristicos2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (1.0/densidadePopulacional1 + qtPontosTuristicos1 < 1.0/densidadePopulacional2 + qtPontosTuristicos2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 6:
          (1.0/densidadePopulacional1 + pibPerCapta1 > 1.0/densidadePopulacional2 + pibPerCapta2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (1.0/densidadePopulacional1 + pibPerCapta1 < 1.0/densidadePopulacional2 + pibPerCapta2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 7:
          (1.0/densidadePopulacional1 + super1 > 1.0/densidadePopulacional2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (1.0/densidadePopulacional1 + super1 < 1.0/densidadePopulacional2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        default:
          printf("Opção inválida!\n");
        break;
      }
      break;
    case 6:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("1 - COMPARAR POPULAÇAO\n");
      printf("2 - COMPARAR ÁREA\n");
      printf("3 - COMPARAR PIB\n");
      printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
      printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
      printf("7 - COMPARAR SUPER PODER\n");

      scanf("%d", &opcao2);

      switch (opcao2) {
        case 1:
          (pibPerCapta1 + populacao1 > pibPerCapta2 + populacao2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + populacao1 < pibPerCapta2 + populacao2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 2:
          (pibPerCapta1 + area1 > pibPerCapta2 + area2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + area1 < pibPerCapta2 + area2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 3:
          (pibPerCapta1 + pib1 > pibPerCapta2 + pib2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + pib1 < pibPerCapta2 + pib2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 4:
          (pibPerCapta1 + qtPontosTuristicos1 > pibPerCapta2 + qtPontosTuristicos2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + qtPontosTuristicos1 < pibPerCapta2 + qtPontosTuristicos2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 5:
          (pibPerCapta1 + 1.0/densidadePopulacional1 > pibPerCapta2 + 1.0/densidadePopulacional2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + 1.0/densidadePopulacional1 < pibPerCapta2 + 1.0/densidadePopulacional2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
        case 7:
          (pibPerCapta1 + super1 > pibPerCapta2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + super1 < pibPerCapta2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        default:
          printf("Opção inválida!\n");
        break;
      }
      break;

    case 7:
      printf("---------------- ESCOLHA O SEGUNDO ATRIBUTO ----------------\n");
      printf("1 - COMPARAR POPULAÇAO\n");
      printf("2 - COMPARAR ÁREA\n");
      printf("3 - COMPARAR PIB\n");
      printf("4 - COMPARAR QUANTIDADE DE PONTOS TURÍSTICOS\n");
      printf("5 - COMPARAR DENSIDADE POPULACIONAL\n");
      printf("6 - COMPARAR PIB PER CAPTA\n");

      scanf("%d", &opcao2);

      switch (opcao2) {
        case 1:
          (pibPerCapta1 + populacao1 > pibPerCapta2 + populacao2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + populacao1 < pibPerCapta2 + populacao2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 2:
          (pibPerCapta1 + area1 > pibPerCapta2 + area2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + area1 < pibPerCapta2 + area2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 3:
          (pibPerCapta1 + pib1 > pibPerCapta2 + pib2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + pib1 < pibPerCapta2 + pib2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 4:
          (pibPerCapta1 + qtPontosTuristicos1 > pibPerCapta2 + qtPontosTuristicos2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + qtPontosTuristicos1 < pibPerCapta2 + qtPontosTuristicos2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
        case 5:
          (pibPerCapta1 + 1.0/densidadePopulacional1 > pibPerCapta2 + 1.0/densidadePopulacional2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + 1.0/densidadePopulacional1 < pibPerCapta2 + 1.0/densidadePopulacional2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
          break;
          case 6:
          (pibPerCapta1 + super1 > pibPerCapta2 + super2) ? printf("Carta 1 %s venceu\n", nomeCidade1) : (pibPerCapta1 + super1 < pibPerCapta2 + super2) ? printf("Carta 2 %s venceu\n", nomeCidade2) : printf("Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
        break;
        default:
          printf("Opção inválida!\n");
        break;
      }
      break;
    
    default:
      printf("Opção inválida. Por favor, escolha um número entre 1 e 7.\n");
      break;
  }

  /*

  switch (opcao) {
    case 1:
      if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if (populacao1 < populacao2) {
          printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
          printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
          printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
    case 2:
      if (area1 > area2) {
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if (area1 < area2) {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
    case 3:
      if (pib1 > pib2) {
        printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, pib2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if (pib1 < pib2) {
          printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, pib1);
          printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, pib2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, pib1);
          printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, pib2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
    case 4:
      if (qtPontosTuristicos1 > qtPontosTuristicos2) {
        printf("Carta 1 - %s: %d\n", nomeCidade1, qtPontosTuristicos1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, qtPontosTuristicos2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if (qtPontosTuristicos1 < qtPontosTuristicos2) {
          printf("Carta 1 - %s: %d\n", nomeCidade1, qtPontosTuristicos1);
          printf("Carta 2 - %s: %d\n", nomeCidade2, qtPontosTuristicos2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %d\n", nomeCidade1, qtPontosTuristicos1);
          printf("Carta 2 - %s: %d\n", nomeCidade2, qtPontosTuristicos2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
    case 5:
      if ((1 / densidadePopulacional1) < (1 / densidadePopulacional2)) {
        printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidadePopulacional2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if ((1 / densidadePopulacional1) > (1 / densidadePopulacional2)) {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidadePopulacional1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidadePopulacional2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidadePopulacional1);
          printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidadePopulacional2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
    case 6:
      if (pibPerCapta1 > pibPerCapta2) {
        printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, pibPerCapta1);
        printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, pibPerCapta2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if (pibPerCapta1 < pibPerCapta2) {
          printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, pibPerCapta1);
          printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, pibPerCapta2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, pibPerCapta1);
          printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, pibPerCapta2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
    case 7:
      if (super1 > super2) {
        printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, super1);
        printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, super2);
        printf("Resultado: Carta 1 %s venceu\n", nomeCidade1);
      } else if (super1 < super2) {
          printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, super1);
          printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, super2);
          printf("Resultado: Carta 2 %s venceu\n", nomeCidade2);
      } else {
          printf("Carta 1 - %s: %.2Lf\n", nomeCidade1, super1);
          printf("Carta 2 - %s: %.2Lf\n", nomeCidade2, super2);
          printf("Resultado: Empate entre as cartas %s e %s\n", nomeCidade1, nomeCidade2);
      }
      break;
  }
  */

return 0;
}
