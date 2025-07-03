#include <stdio.h>

int main() {
    
/*
Calculando Densidade Populacional e PIB per Capita
No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

O que você vai fazer

Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:
Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

Densidade populacional = indica a riqueza média por pessoa na cidade
float Densidade Populacional = populacao / area 


PIB per Capita = indica a riqueza média por pessoa na cidade
float PIB per Capita = PIB / populacao
*/

// Variáveis para os atributos das cartas 
char estado1, estado2; // Variável para o estado (A a H)
char codigoCarta1[4], codigoCarta2[4]; // Variável para o código da carta (ex: A01, B03)
char cidade1[50], cidade2[50]; // Variável para o nome da cidade
long int populacao1, populacao2;  // Variável para a população
double area1, area2; // Variável para a área em km²
double pib1, pib2; // Variável para o PIB
int pontosTuristicos1, pontosTuristicos2; // Variavel para pontos turisticos

// Bem vindas ao Desafio Super Trunfo - Cadastro de Cidades
// Este é o ponto de partida para o cadastro das cartas de cidades.

//Cadastro Carta 1
printf("Desafio Super Trunfo - Cadastro de Cartas\n");
printf("\n");
printf("Cadastro Carta 1: \n");
printf("Estado: Digite uma letra de 'A' a 'H' para representar o estado da cidade.\n");
scanf(" %c", &estado1); // Le o estado da cidade 1
printf("Código da Carta: Digite letra do estado seguida de um número de 01 a 04. Ex.: A01 \n");
scanf("%s", codigoCarta1); // Le o código da carta da cidade 1
printf("Nome da Cidade: Digite o nome da cidade. \n");
scanf(" %[^\n]", cidade1); // Le o nome da cidade 1
printf("População: Digite o número de habitantes da cidade. \n");
scanf("%ld", &populacao1); // Le a população da cidade 1
printf("Área (em km²): Digite a área da cidade em quilômetros quadrados. \n");
scanf("%lf", &area1); // Le a área da cidade 1
printf("PIB: Digite o Produto Interno Bruto da cidade. \n");
scanf("%lf", &pib1); // Le o PIB da cidade 1
printf("Número de Pontos Turísticos: Digite a quantidade de pontos turísticos na cidade. \n");
scanf("%d", &pontosTuristicos1); // Le o número de pontos turísticos da cidade 1
printf("\n");


// Cadastro Carta 2
printf("\n");
printf("Cadastro Carta 2:\n");
printf("Estado: Digite uma letra de 'A' a 'H' para representar o estado da cidade.\n");
scanf(" %c", &estado2); // Le o estado da cidade 2
printf("Código da Carta: Digite letra do estado seguida de um número de 01 a 04. Ex.: A01\n");
scanf("%s", codigoCarta2); // Le o código da carta da cidade 2
printf("Nome da Cidade: Digite o nome da cidade. \n");
scanf(" %[^\n]", cidade2); // Le o nome da cidade 2
printf("População: Digite o número de habitantes da cidade. \n");
scanf("%ld", &populacao2); // Le a população da cidade 2
printf("Área (em km²): Digite a área da cidade em quilômetros quadrados. \n");
scanf("%lf", &area2); // Le a área da cidade 2
printf("PIB: Digite o Produto Interno Bruto da cidade. \n");
scanf("%lf", &pib2); // Le o PIB da cidade 2
printf("Número de Pontos Turísticos: Digite a quantidade de pontos turísticos na cidade. \n");
scanf("%d", &pontosTuristicos2); // Le o número de pontos turísticos da cidade 2
printf("\n");

// Cálculo e Variavel da Densidade Populacinal das Cartas

float densidadePopulacional1 = ((double)populacao1 / area1); // Declaração da variavel Densidade Populacinal da Carta 1
float densidadePopulacional2 = ((double)populacao2 / area2); // Declaração da variavel Densidade Populacinal da Carta 2

// Cálculo e Váriavel do PIB per Capita das Cartas
float PIBperCapita1 = ((pib1 * 1e9) / (double)populacao1); // Variavel e Calculo do PIB per Capita da Carta 1
float PIBperCapita2 = ((pib2 * 1e9) / (double)populacao2); // Variavel e Calculo do PIB per Capita da Carta 2

// Dados da Carta 1
printf("\n");
printf("Informações dos Dados da Carta 1:\n");
printf("Estado: %c \n", estado1); // Mostra o  Estado 1
printf("Código da Carta: %s \n", codigoCarta1); // Mostra o Código da Carta 1
printf("Nome da Cidade: %s \n", cidade1); // Mostra o Nome da cidade da Carta 1
printf("População: %ld habitantes \n", populacao1); // Mostra a população da Carta 1
printf("Área: %.2lf km² \n", area1); // Mostra o valor da area da Carta 1
printf("PIB: %.2lf bilhões de reais\n", pib1); // Mostra o PIB da Carta 1
printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1); // Mostra a qtd de Pontos Turisticos da Carta 1
printf("Densidade Populacional: %.2f \n", densidadePopulacional1); // Mostrar Densidade Populacional da Carta 1
printf("PIB per Capita: %.2f \n", PIBperCapita1); // Mostra PIB per Capita da Carta 1
printf("\n");

printf("\n");

// Dados da Carta 2
printf("\n");
printf("Informações dos Dados das Carta 2:\n");
printf("Estado: %c \n", estado2); // Mostra o  Estado 2
printf("Código da Carta: %s \n", codigoCarta2); // Mostra o Código da Carta 2
printf("Nome da Cidade: %s \n", cidade2); // Mostra o Nome da cidade da Carta 2
printf("População: %ld habitantes \n", populacao2); // Mostra a população da Carta 2
printf("Área: %.2lf km² \n", area2); // Mostra o tamanho da area da Carta 2
printf("PIB: %.2lf bilhões de reais\n", pib2); // Mostra o PIB da Carta 2
printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2); // Mostra a qtd de Pontos Turisticos da Carta 2
printf("Densidade Populacional: %.2f \n", densidadePopulacional2); // Mostrar Densidade Populacional da Carta 2
printf("PIB per Capita: %.2f \n", PIBperCapita2); // Mostra PIB per Capita da Carta 2
printf("\n");



return 0;

}
