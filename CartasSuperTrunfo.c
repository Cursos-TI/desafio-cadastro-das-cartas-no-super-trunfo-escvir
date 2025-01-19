#include <stdio.h>

int main() {

int populacao; 
float area;
float PIB;
int pontosturisticos;
char estado;
char cidade;
char codigo;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da sua cidade: \n");
    scanf(" %s", &cidade);

    printf("Digite o codigo da carta: %d\n");
    scanf("%s", &codigo);

    printf("Digite o numero  da populacao: \n");
    scanf(" %e", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf(" %e", &area);

    printf("Digite o valor do PIB: \n");
    scanf(" %e", &PIB);

    printf("Digite os pontosturisticos: \n");
    scanf(" %d", &pontosturisticos);

    return 0;
}