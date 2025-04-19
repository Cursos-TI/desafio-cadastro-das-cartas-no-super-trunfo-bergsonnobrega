#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;
    
    printf("=== Super Trunfo - Paises ===\n");
    
    // Cadastro da primeira carta
    printf("\nCadastro da Carta 1\n");
    printf("Codigo da carta (exemplo A01): ");
    scanf("%s", carta1.codigo);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Codigo da carta (exemplo B02): ");
    scanf("%s", carta2.codigo);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Exibicao dos dados da primeira carta
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    
    // Exibicao dos dados da segunda carta
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}
