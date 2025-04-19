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
    
    printf("=== Super Trunfo - Países ===\n");
    
    // Cadastro da primeira carta
    printf("\nCadastro da Carta 1\n");
    printf("Código da carta (exemplo A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Código da carta (exemplo B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Exibição dos dados da primeira carta
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    
    // Exibição dos dados da segunda carta
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}
