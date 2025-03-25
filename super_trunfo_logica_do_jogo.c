#include <stdio.h>

int main(){

//Declaração de variáveis
int populacao1, populacao2;
int soma, subtracao, multiplicacao, divisao;
int numerodospontosturisticos1, numerodospontosturisticos2;
int resultado1, resultado2;
int opcao;
float densidadepopulacional1, densidadepopulacional2;
float area1, area2;
float PIB1, PIB2;
float PIBpercapita1, PIBpercapita2;
float media1, media2;
char carta1, carta2;
char estado1, estado2;
char cidade1, cidade2;
char codigo1, codigo2;
char primeiroAtributo, segundoAtributo;

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

//Aqui você vai escolher duas opções para fazer a comparação
printf("### Escolha quais atributos comparar ###\n");
// Início do jogo
printf("Bem-vindo ao jogo!\n");
printf("Escolha o primeiro atributo.\n");
printf("A. População.\n");
printf("B. Número dos Pontos Turísticos.\n");
printf("C. Área.\n");
printf("D. PIB.\n");

printf("Escolha a comparação: ");
scanf(" %c", &primeiroAtributo);

switch (primeiroAtributo)
{
case 'A':
case 'a':
printf("Você escolheu a opção População!\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;
break;

case 'B':
case 'b':
printf("Você escolheu a opção Número dos Pontos Turísticos!\n");
resultado1 = numerodospontosturisticos1 > numerodospontosturisticos2 ? 1 : 0;
break;
case 'C':
case 'c':
printf("Você escolheu a opção Área!\n");
resultado1 = area1 > area2 ? 1 : 0;
break;
case 'D':
case 'd':
printf("Você escolheu a opção PIB!\n");
resultado1 = PIB1 > PIB2 ? 1 : 0;
break;
default:
printf("Opção de jogo inválida.\n");
break;
}

//Escolha o segundo atributo
printf("Escolha o segundo atributo.!\n");
printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
printf("A. População.\n");
printf("B. Número dos Pontos Turísticos.\n");
printf("C. Área.\n");
printf("D. PIB.\n");

printf("Escolha a comparação: ");
scanf(" %c", &segundoAtributo);

switch (segundoAtributo)
{
case 'A':
case 'a':
printf("Você escolheu a opção População!\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;
break;

case 'B':
case 'b':
printf("Você escolheu a opção Número dos Pontos Turísticos!\n");
resultado1 = numerodospontosturisticos1 > numerodospontosturisticos2 ? 1 : 0;
break;
case 'C':
case 'c':
printf("Você escolheu a opção Área!\n");
resultado1 = area1 > area2 ? 1 : 0;
break;
case 'D':
case 'd':
printf("Você escolheu a opção PIB!\n");
resultado1 = PIB1 > PIB2 ? 1 : 0;
break;
default:
printf("Opção de jogo inválida.\n");
}

if (populacao1 + PIB1 >  populacao2 + PIB2) {
printf ("Parabéns, você venceu! A população e o PIB da carta1 somados, é maior!\n");
} else if (populacao1 + PIB1 <  populacao2 + PIB2) {
printf ("Parabéns, você venceu! A população e o PIB da carta2 somados, é maior!\n");
} else if (populacao1 + PIB1 == populacao2 + PIB2){
printf ("Vocês Empataram!\n");
}

return 0;

}