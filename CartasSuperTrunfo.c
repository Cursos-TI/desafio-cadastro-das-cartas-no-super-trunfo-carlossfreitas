#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    char estado1,estado2;
    char nomeCidade1[20],codigo1[3],nomeCidade2[20],codigo2[3];
    int pontosTuristicos1,pontosTuristicos2;
    float area1,pib1,area2,pib2,populacao1,populacao2;
    
   

  // Área para entrada de dados

    printf("\tBem Vindo ao jogo Super Trunfo Países\n\n");
 
    //CARTA1
    printf("Vamos cadastrar a carta 1 \n\n");
   
    printf("Digite uma letra de A a H representando seu estado: \n");
    scanf(" %c",&estado1);
   
    printf("Digite código da carta de 01 a 04: \n");
    scanf("%s",codigo1);
  
    printf("Digite o nome da sua cidade: \n");
    getchar(); // limpa o enter do scanf anterior
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
   
    printf("Digite a população da sua cidade: \n");
    scanf("%d",&populacao1);
   
    printf("Digite a area da sua Cidade em Km²: \n");
    scanf("%f",&area1);
    
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&pib1);
   
    printf("Digite o número de pontos turísticos da sua cidade:  \n");
    scanf("%d",&pontosTuristicos1); 
   
    //CARTA2
    printf("\nVamos cadastrar a carta 2 \n\n");
   
    printf("Digite uma letra de A a H representando seu estado: \n");
    scanf(" %c",&estado2);
    
    printf("Digite código da carta, letra do estado mais numero de 01 a 04: \n");
    scanf("%s",codigo2);

    printf("Digite o nome da sua cidade: \n");
    getchar(); // limpa o enter do scanf anterior
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;  
   
    printf("Digite a população da sua cidade: \n");
    scanf("%d",&populacao2);
   
    printf("Digite a area da sua Cidade em Km²: \n");
    scanf("%f",&area2);
   
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&pib2);
   
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d",&pontosTuristicos2);


  // Área para exibição dos dados da cidade
  // ---CARTA 1---
  
  printf("\n\n\nCarta: 1\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %c%s\n",estado1,codigo1);
  printf("Nome da Cidade: %s\n",nomeCidade1);
  printf("População: %2d\n",populacao1);
  printf("Área: %2f Km²\n",area1);
  printf("PIB: %2f Bilhoes de Reais\n",pib1);
  printf("Números de Pontos Turísticos: %d\n\n\n",pontosTuristicos1);

  // ---CARTA 2 ---

  printf("Carta: 2\n");
  printf("Estado: %c\n",estado2);
  printf("Código: %c%s\n",estado2,codigo2);
  printf("Nome da Cidade: %s\n",nomeCidade2);
  printf("População: %2d\n",populacao2);
  printf("Área: %2f Km²\n",area2);
  printf("PIB: %2f Bilhoes de Reais\n",pib2);
  printf("Números de Pontos Turísticos: %d\n\n",pontosTuristicos2);


  
return 0;
} 
