#include <stdio.h>

typedef struct {
    char nome[100];
    char estado[3];
    int codigo;
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

float calcular_densidade(unsigned long int populacao, float area) {
    return populacao / area;
}

float calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return pib / populacao;
}

float calcular_super_poder(Carta c) {
    return (float)c.populacao +
           c.area +
           c.pib +
           (float)c.pontos_turisticos +
           c.pib_per_capita +
           (1.0f / c.densidade);
}

// Limpa até a próxima linha
void limpar_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void ler_carta(Carta *carta, int numero) {
    printf("\nDigite os dados da Carta %d:\n", numero);

    printf("Nome: ");
    scanf(" %[^\n]", carta->nome);  // lê até o \n, inclusive com espaços
    limpar_buffer(); // limpa o \n após ler a string

    printf("Estado (UF): ");
    scanf("%2s", carta->estado);
    limpar_buffer();

    printf("Codigo: ");
    scanf("%d", &carta->codigo);
    limpar_buffer();

    printf("Populacao: ");
    scanf("%lu", &carta->populacao);
    limpar_buffer();

    printf("Area (em km²): ");
    scanf("%f", &carta->area);
    limpar_buffer();

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta->pib);
    limpar_buffer();

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta->pontos_turisticos);
    limpar_buffer();

    carta->densidade = calcular_densidade(carta->populacao, carta->area);
    carta->pib_per_capita = calcular_pib_per_capita(carta->pib, carta->populacao);
    carta->super_poder = calcular_super_poder(*carta);
}

void comparar_cartas(Carta c1, Carta c2) {
    printf("\nComparação de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade < c2.densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);
}

int main() {
    Carta carta1, carta2;

    ler_carta(&carta1, 1);
    ler_carta(&carta2, 2);

    comparar_cartas(carta1, carta2);

    return 0;
}