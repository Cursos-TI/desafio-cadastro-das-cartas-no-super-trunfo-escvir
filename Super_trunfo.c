#include <stdio.h>

int main() {

//Declaração de variáveis
unsigned long int populacao;
int soma, subtracao, multiplicacao, divisao;
int numerodospontosturisticos;
float densidadepopulacional;
float SuperPoder;
float area;
float PIB;
float PIBpercapita;
float media;
char carta1, carta2;
char Vencedor;
char estado;
char cidade;
char codigo;

//Aqui está sendo feito o castro da carta1
printf("Carta 1, digite seu estado: \n");
scanf("%s", &estado);

printf("Carta 1, digite o nome da sua cidade: \n");
scanf(" %s", &cidade);

printf("Carta 1, digite o codigo da carta: \n");
scanf("%s", &codigo);

printf("Carta 1, digite o numero  da populacao: \n");
scanf("%ld", &populacao);

printf("Carta 1, digite o tamanho da area: \n");
scanf(" %f", &area);

printf("Carta 1, digite o valor do PIB: \n");
scanf(" %f", &PIB);

printf("Carta 1, digite o numero dos pontos turisticos: \n");
scanf(" %d", &numerodospontosturisticos);

//Aqui sendo feito os cálculos
media = (populacao / area);

printf("A densidade populacional da carta 1 é: %.2f\n", media);

media = (PIB / populacao);

printf("O PIB per capita da carta 1 é: %.2f\n", media);

media = (densidadepopulacional * PIBpercapita);

printf("O cálculo da Densidade Populacional e o PIB per capita da carta 1 é: %.2f\n", multiplicacao);

media = (populacao + area + PIB + numerodospontosturisticos + PIBpercapita + densidadepopulacional); 

printf("O Super Poder da carta 1 é: %.2f\n", media);

//Aqui está sendo feito o cadastro da carta2
printf("Carta 2, digite seu estado: \n");
scanf("%s", &estado);

printf("Carta 2, digite o nome da sua cidade: \n");
scanf(" %s", &cidade);

printf("Carta 2, digite o codigo da carta: \n");
scanf("%s", &codigo);

printf("Carta 2, digite o numero  da populacao: \n");
scanf("%ld", &populacao);

printf("Carta 2, digite o tamanho da area: \n");
scanf(" %f", &area);

printf("Carta 2, digite o valor do PIB: \n");
scanf(" %f", &PIB);

printf("Carta 2, digite o numero dos pontos turisticos: \n");
scanf(" %d", &numerodospontosturisticos);

//Aqui está sendo feito os cálculos
media = (populacao / area);

printf("A densidade populacional da carta 2 é: %.2f\n", media);

media = (PIB / populacao);

printf("O PIB per capita da carta 2 é: %.2f\n", media);

media = (densidadepopulacional * PIBpercapita);

printf("O cálculo da Densidade Populacional e o PIB per capita da carta 2 é: %.2f\n", media);

media = (populacao + area + PIB + numerodospontosturisticos + PIBpercapita + densidadepopulacional); 

printf("O Super Poder da carta 2 é: %.2f\n", media);

//Aqui está sendo feito as Comparações
printf("populacao: carta1 > carta2: %d\n", carta1 > carta2);
printf("area: carta1 < carta2: %d\n", carta1 < carta2);
printf("PIB: carta1 > carta2: %d\n", carta1 > carta2);
printf("numerodospontosturisticos: carta1 < carta2: %d\n", carta1 < carta2);
printf("densidadepopulacional: carta1 > carta2: %d\n", carta1 > carta2); 
printf("PIBpercapita: carta1 < carta2: %d\n", carta1 < carta2);
printf("SuperPoder: carta1 > carta2: %d\n", carta1 > carta2);
printf("Vencedor: carta1 < carta2: %d\n", carta1 < carta2);

return 0;

}
