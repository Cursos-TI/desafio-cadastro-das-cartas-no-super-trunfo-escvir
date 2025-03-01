#include <stdio.h>

int main() {

int populacao, numerodospontosturisticos; 
float area;
float PIB;
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

    printf("Digite o numerodospontosturisticos: \n");
    scanf(" %d", &numerodospontosturisticos);

    return 0;
}
