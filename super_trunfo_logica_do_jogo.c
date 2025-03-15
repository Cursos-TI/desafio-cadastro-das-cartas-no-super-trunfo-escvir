#include <stdio.h>

int main() {

//Declaração de variáveis
int populacao;
int soma, subtracao, multiplicacao, divisao;
int numerodospontosturisticos;
float densidadepopulacional;
float area;
float PIB;
float PIBpercapita;
float media;
char carta1, carta2;
char estado;
char cidade;
char codigo;

//Aqui está sendo feito o cadastro da carta1
printf("Carta 1, digite seu estado: \n");
scanf("%s", &estado);

 printf("Carta 1, digite o nome da sua cidade: \n");
 scanf(" %s", &cidade);

 printf("Carta 1, digite o codigo da carta: \n");
 scanf("%s", &codigo);

 printf("Carta 1, digite o numero  da populacao: \n");
 scanf("%ld", &populacao);

 printf("Carta 1, digite o tamanho da area: \n");
 scanf(" %e", &area);

 printf("Carta 1, digite o valor do PIB: \n");
 scanf(" %e", &PIB);

 printf("Carta 1, digite o numero dos pontos turisticos: \n");
 scanf(" %d", &numerodospontosturisticos);

//Aqui está sendo feito os cálculos
media = (populacao / area);

printf("A densidade populacional da carta 1 é: %.2f\n", media);

media = (PIB / populacao);

printf("O PIB per capita da carta 1 é: %.2f\n", media);

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
scanf(" %e", &area);

printf("Carta 2, digite o valor do PIB: \n");
scanf(" %e", &PIB);

printf("Carta 2, digite o numero dos pontos turisticos: \n");
scanf(" %d", &numerodospontosturisticos);

//Aqui está sendo feito os cálculos 
media = (populacao / area);

printf("A densidade populacional da carta 2 é: %.2f\n", media);

media = (PIB / populacao);

printf("O PIB per capita da carta 2 é: %.2f\n", media);

//Aqui está sendo feito a comparação de um atributo das cartas
if (populacao > populacao) {
printf ("A populacao da carta1 é maior!\n");
} else {
printf ("A populacao da carta2 é maior!\n");
}

return 0;

}