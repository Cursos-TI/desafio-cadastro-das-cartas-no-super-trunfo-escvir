#include <stdio.h>

int main() {

//Declaração de variáveis e a quantidade da população de ambas as cartas
int populacao1 = 2550000, populacao2 = 2450000;
int soma, subtracao, multiplicacao, divisao;
int numerodospontosturisticos1, numerodospontosturisticos2;
float densidadepopulacional1, densidadepopulacional2;
float area1, area2;
float PIB1, PIB2;
float PIBpercapita1, PIBpercapita2;
float media1, media2;
char carta1, carta2;
char estado1, estado2;
char cidade1, cidade2;
char codigo1, codigo2;

//Aqui está sendo feito o cadastro da carta1
printf("Carta 1, digite seu estado: \n");
scanf("%s", &estado1);

 printf("Carta 1, digite o nome da sua cidade: \n");
 scanf(" %s", &cidade1);

 printf("Carta 1, digite o codigo da carta: \n");
 scanf("%s", &codigo1);

 printf("Carta 1, digite o numero  da populacao: \n");
 scanf("%d", &populacao1);

 printf("Carta 1, digite o tamanho da area: \n");
 scanf(" %e", &area1);

 printf("Carta 1, digite o valor do PIB: \n");
 scanf(" %e", &PIB1);

 printf("Carta 1, digite o numero dos pontos turisticos: \n");
 scanf(" %d", &numerodospontosturisticos1);

//Aqui está sendo feito os cálculos
media1 = (populacao1 / area1);

printf("A densidade populacional da carta 1 é: %.2f\n", media1);

media1 = (PIB1 / populacao1);

printf("O PIB per capita da carta 1 é: %.2f\n", media1);

//Aqui está sendo feito o cadastro da carta2
printf("Carta 2, digite seu estado: \n");
scanf("%s", &estado2);

printf("Carta 2, digite o nome da sua cidade: \n");
scanf(" %s", &cidade2);

printf("Carta 2, digite o codigo da carta: \n");
scanf("%s", &codigo2);

printf("Carta 2, digite o numero  da populacao: \n");
scanf("%d", &populacao2);

printf("Carta 2, digite o tamanho da area: \n");
scanf(" %e", &area2);

printf("Carta 2, digite o valor do PIB: \n");
scanf(" %e", &PIB2);

printf("Carta 2, digite o numero dos pontos turisticos: \n");
scanf(" %d", &numerodospontosturisticos2);

//Aqui está sendo feito os cálculos 
media2 = (populacao2 / area2);

printf("A densidade populacional da carta 2 é: %.2f\n", media2);

media2 = (PIB2 / populacao2);

printf("O PIB per capita da carta 2 é: %.2f\n", media2);

//Aqui está sendo feito a comparação de um atributo das cartas
if (populacao1 > populacao2) {
printf ("A populacao da carta1 é maior!\n");
} else if (populacao1 < populacao2) {
printf ("A populacao da carta2 é maior!\n");
}

return 0;

}