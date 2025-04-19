#include <stdio.h>
#include <locale.h>  // Adicionando suporte a caracteres especiais

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;  // Alterado para unsigned long int
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;  // Novo atributo
} Carta;

// Função para calcular o Super Poder de uma carta
float calcularSuperPoder(Carta carta) {
    return carta.pib + carta.pibPerCapita + (float)carta.pontosTuristicos + 
           (1.0f/carta.densidadePopulacional) + (float)carta.populacao + carta.area;
}

// Função para comparar atributos e retornar o vencedor (1 para carta1, 0 para carta2)
int compararAtributo(float valor1, float valor2, int menorVence) {
    if (menorVence) {
        return valor1 < valor2 ? 1 : 0;
    }
    return valor1 > valor2 ? 1 : 0;
}

void exibirComparacoes(Carta carta1, Carta carta2) {
    printf("\nComparacao das Cartas:\n");
    printf("----------------------------------------\n");
    
    int resultadoPopulacao = compararAtributo(carta1.populacao, carta2.populacao, 0);
    printf("Populacao: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    
    int resultadoArea = compararAtributo(carta1.area, carta2.area, 0);
    printf("Area: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    
    int resultadoPIB = compararAtributo(carta1.pib, carta2.pib, 0);
    printf("PIB: Carta %d venceu (%d)\n", resultadoPIB ? 1 : 2, resultadoPIB);
    
    int resultadoPontos = compararAtributo(carta1.pontosTuristicos, carta2.pontosTuristicos, 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultadoPontos ? 1 : 2, resultadoPontos);
    
    int resultadoDensidade = compararAtributo(carta1.densidadePopulacional, carta2.densidadePopulacional, 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidade ? 1 : 2, resultadoDensidade);
    
    int resultadoPIBperCapita = compararAtributo(carta1.pibPerCapita, carta2.pibPerCapita, 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);
    
    int resultadoSuperPoder = compararAtributo(carta1.superPoder, carta2.superPoder, 0);
    printf("Super Poder: Carta %d venceu (%d)\n", resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);
}

void exibirCarta(Carta carta, int numeroCarta) {
    printf("\n=== Carta %d ===\n", numeroCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("Populacao: %lu habitantes\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhoes de reais\n", carta.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
    printf("Super Poder: %.2f\n", carta.superPoder);
}

int main() {
    setlocale(LC_ALL, "Portuguese");  // Configurando locale para português
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
    scanf("%lu", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Calcula os atributos derivados da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = calcularSuperPoder(carta1);
    
    // Cadastro da segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo (exemplo B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Calcula os atributos derivados da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = calcularSuperPoder(carta2);
    
    printf("\n=== RESULTADO DO CADASTRO ===\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);
    
    printf("\n=== RESULTADO DAS COMPARACOES ===\n");
    exibirComparacoes(carta1, carta2);
    
    printf("\n=== FIM DO PROGRAMA ===\n");
    return 0;
}
