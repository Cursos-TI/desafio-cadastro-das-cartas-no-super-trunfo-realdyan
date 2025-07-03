#include <stdio.h>

int main() {
    
/*
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/

// Variáveis para os atributos das cartas 
char estado1, estado2; // Variável para o estado (A a H)
char codigoCarta1[4], codigoCarta2[4]; // Variável para o código da carta (ex: A01, B03)
char cidade1[50], cidade2[50]; // Variável para o nome da cidade
float populacao1, populacao2;  // Variável para a população
float area1, area2; // Variável para a área em km²
float pib1, pib2; // Variável para o PIB
int pontosTuristicos1, pontosTuristicos2; // Variavel para pontos turisticos

// Bem vindas ao Desafio Super Trunfo - Cadastro de Cidades
// Este é o ponto de partida para o cadastro das cartas de cidades.

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
scanf("%f", &populacao1); // Le a população da cidade 1
printf("Área (em km²): Digite a área da cidade em quilômetros quadrados. \n");
scanf("%f", &area1); // Le a área da cidade 1
printf("PIB: Digite o Produto Interno Bruto da cidade. \n");
scanf("%f", &pib1); // Le o PIB da cidade 1
printf("Número de Pontos Turísticos: Digite a quantidade de pontos turísticos na cidade. \n");
scanf("%i", &pontosTuristicos1); // Le o número de pontos turísticos da cidade 1
printf("\n");

printf("\n");
printf("Cadastro Carta 2:\n");
printf("Estado: Digite uma letra de 'A' a 'H' para representar o estado da cidade.\n");
scanf(" %c", &estado2); // Le o estado da cidade 2
printf("Código da Carta: Digite letra do estado seguida de um número de 01 a 04. Ex.: A01\n");
scanf("%s", codigoCarta2); // Le o código da carta da cidade 2
printf("Nome da Cidade: Digite o nome da cidade. \n");
scanf(" %[^\n]", cidade2); // Le o nome da cidade 2
printf("População: Digite o número de habitantes da cidade. \n");
scanf("%f", &populacao2); // Le a população da cidade 2
printf("Área (em km²): Digite a área da cidade em quilômetros quadrados. \n");
scanf("%f", &area2); // Le a área da cidade 2
printf("PIB: Digite o Produto Interno Bruto da cidade. \n");
scanf("%f", &pib2); // Le o PIB da cidade 2
printf("Número de Pontos Turísticos: Digite a quantidade de pontos turísticos na cidade. \n");
scanf("%i", &pontosTuristicos2); // Le o número de pontos turísticos da cidade 2
printf("\n");

printf("\n");
printf("Informações dos Dados das Carta 1:\n");
printf("Estado: %c \n", estado1); // Mostra o  Estado 1
printf("Código da Carta: %s \n", codigoCarta1); // Mostra o Código da Carta 1
printf("Nome da Cidade: %s \n", cidade1); // Mostra o Nome da cidade da Carta 1
printf("População: %.2f habitantes \n", populacao1); // Mostra a população da Carta 1
printf("Área: %.2f km² \n", area1); // Mostra o valor da area da Carta 1
printf("PIB: %.2f\n", pib1); // Mostra o PIB da Carta 1
printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1); // Mostra a qtd de Pontos Turisticos da Carta 1
printf("\n");

printf("\n");
printf("\n");
printf("Informações dos Dados das Carta 2:\n");
printf("Estado: %c \n", estado2); // Mostra o  Estado 2
printf("Código da Carta: %s \n", codigoCarta2); // Mostra o Código da Carta 2
printf("Nome da Cidade: %s \n", cidade2); // Mostra o Nome da cidade da Carta 2
printf("População: %.2f habitantes \n", populacao2); // Mostra a população da Carta 2
printf("Área: %.2f km² \n", area2); // Mostra o tamanho da area da Carta 2
printf("PIB: %.2f\n", pib2); // Mostra o PIB da Carta 2
printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2); // Mostra a qtd de Pontos Turisticos da Carta 2
printf("\n");

   

return 0;

}
