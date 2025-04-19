#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1, carta2;
    
    printf("=== Super Trunfo - Paises ===\n");
    
    printf("\n=== CADASTRO DE CARTAS ===\n");
    // Cadastro da primeira carta
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo (exemplo A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Calcula os atributos derivados da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    
    // Cadastro da segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo (exemplo B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Calcula os atributos derivados da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    
    printf("\n=== RESULTADO DO CADASTRO ===\n");
    // Exibicao dos dados da primeira carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    
    // Exibicao dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    
    printf("\n=== FIM DO PROGRAMA ===\n");
    return 0;
}
