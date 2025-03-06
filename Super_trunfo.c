#include <stdio.h>

int main() {

int populacao; 
int numerodospontosturisticos;
float area;
float PIB;
float densidadepopulacional;
float PIBpercapita;
float media;
char estado;
char cidade;
char codigo;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o numero  da populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf(" %e", &area);

    printf("Digite o valor do PIB: \n");
    scanf(" %e", &PIB);

    printf("Digite o numero dos pontos turisticos: \n");
    scanf(" %d", &numerodospontosturisticos);

    printf("Digite o numero da populacao : \n");
    scanf("%f", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);

    media = (populacao / area);

    printf("Densidade populacional: %.2f\n", media);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero da populacao: \n");
    scanf("%f", &populacao);

    media = (PIB / populacao);

    printf("PIB per capita: %.2f\n", media);

    return 0;
}