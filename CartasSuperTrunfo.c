#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Larissa

int main() {
    // Declaracao de variaveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    
    // Entrada de dados para a primeira carta
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade1);
    printf("Digite a populacao da cidade: ");
    scanf(" %lu", &populacao1);
    printf("Digite a area da cidade em quilometros quadrados: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade em bilhoes de reais: ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Calculos para a primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    // Declaracao de variaveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    
    // Entrada de dados para a segunda carta
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade2);
    printf("Digite a populacao da cidade: ");
    scanf(" %lu", &populacao2);
    printf("Digite a area da cidade em quilometros quadrados: ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade em bilhoes de reais: ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Calculos para a segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // Exibicao dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f quilometros quadrados\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes por quilometro quadrado\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("----------------------\n");

    // Exibicao dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f quilometros quadrados\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes por quilometro quadrado\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("----------------------\n");

    // Menu de selecao dos atributos para comparacao
    int opcao1, opcao2;
    float valorAtributo1Carta1, valorAtributo1Carta2;
    float valorAtributo2Carta1, valorAtributo2Carta2;
    char *nomeAtributo1, *nomeAtributo2;
    int invertido1 = 0, invertido2 = 0;

    do {
        printf("\nEscolha o primeiro atributo para comparacao:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("Digite sua opcao (1-6): ");
        scanf("%d", &opcao1);

        if (opcao1 < 1 || opcao1 > 6) {
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
        }
    } while (opcao1 < 1 || opcao1 > 6);

    do {
        printf("\nEscolha o segundo atributo para comparacao (diferente do primeiro):\n");
        printf("Atributos disponiveis:\n");
        if (opcao1 != 1) printf("1 - Populacao\n");
        if (opcao1 != 2) printf("2 - Area\n");
        if (opcao1 != 3) printf("3 - PIB\n");
        if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
        if (opcao1 != 5) printf("5 - Densidade Populacional\n");
        if (opcao1 != 6) printf("6 - PIB per Capita\n");
        printf("Digite sua opcao (1-6): ");
        scanf("%d", &opcao2);

        if (opcao2 == opcao1) {
            printf("Voce nao pode escolher o mesmo atributo duas vezes!\n");
            opcao2 = 0;
        } else if (opcao2 < 1 || opcao2 > 6) {
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
            opcao2 = 0;
        }
    } while (opcao2 == 0);

    // Definindo os valores e nomes dos atributos escolhidos
    switch(opcao1) {
        case 1:
            valorAtributo1Carta1 = populacao1;
            valorAtributo1Carta2 = populacao2;
            nomeAtributo1 = "Populacao";
            break;
        case 2:
            valorAtributo1Carta1 = area1;
            valorAtributo1Carta2 = area2;
            nomeAtributo1 = "Area";
            break;
        case 3:
            valorAtributo1Carta1 = pib1;
            valorAtributo1Carta2 = pib2;
            nomeAtributo1 = "PIB";
            break;
        case 4:
            valorAtributo1Carta1 = pontosTuristicos1;
            valorAtributo1Carta2 = pontosTuristicos2;
            nomeAtributo1 = "Pontos Turisticos";
            break;
        case 5:
            valorAtributo1Carta1 = densidadePopulacional1;
            valorAtributo1Carta2 = densidadePopulacional2;
            nomeAtributo1 = "Densidade Populacional";
            invertido1 = 1;
            break;
        case 6:
            valorAtributo1Carta1 = pibPerCapita1;
            valorAtributo1Carta2 = pibPerCapita2;
            nomeAtributo1 = "PIB per Capita";
            break;
    }

    switch(opcao2) {
        case 1:
            valorAtributo2Carta1 = populacao1;
            valorAtributo2Carta2 = populacao2;
            nomeAtributo2 = "Populacao";
            break;
        case 2:
            valorAtributo2Carta1 = area1;
            valorAtributo2Carta2 = area2;
            nomeAtributo2 = "Area";
            break;
        case 3:
            valorAtributo2Carta1 = pib1;
            valorAtributo2Carta2 = pib2;
            nomeAtributo2 = "PIB";
            break;
        case 4:
            valorAtributo2Carta1 = pontosTuristicos1;
            valorAtributo2Carta2 = pontosTuristicos2;
            nomeAtributo2 = "Pontos Turisticos";
            break;
        case 5:
            valorAtributo2Carta1 = densidadePopulacional1;
            valorAtributo2Carta2 = densidadePopulacional2;
            nomeAtributo2 = "Densidade Populacional";
            invertido2 = 1;
            break;
        case 6:
            valorAtributo2Carta1 = pibPerCapita1;
            valorAtributo2Carta2 = pibPerCapita2;
            nomeAtributo2 = "PIB per Capita";
            break;
    }

    // Comparacao e exibicao dos resultados
    printf("\n=== Resultado da Comparacao ===\n\n");
    
    // Primeiro atributo
    printf("Comparando %s:\n", nomeAtributo1);
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valorAtributo1Carta1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valorAtributo1Carta2);
    
    int pontosCarta1 = 0, pontosCarta2 = 0;
    
    if (invertido1) {
        if (valorAtributo1Carta1 < valorAtributo1Carta2) {
            printf("Carta 1 (%s) venceu neste atributo!\n", nomeCidade1);
            pontosCarta1++;
        } else if (valorAtributo1Carta2 < valorAtributo1Carta1) {
            printf("Carta 2 (%s) venceu neste atributo!\n", nomeCidade2);
            pontosCarta2++;
        } else {
            printf("Empate neste atributo!\n");
        }
    } else {
        if (valorAtributo1Carta1 > valorAtributo1Carta2) {
            printf("Carta 1 (%s) venceu neste atributo!\n", nomeCidade1);
            pontosCarta1++;
        } else if (valorAtributo1Carta2 > valorAtributo1Carta1) {
            printf("Carta 2 (%s) venceu neste atributo!\n", nomeCidade2);
            pontosCarta2++;
        } else {
            printf("Empate neste atributo!\n");
        }
    }

    // Segundo atributo
    printf("\nComparando %s:\n", nomeAtributo2);
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, valorAtributo2Carta1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, valorAtributo2Carta2);
    
    if (invertido2) {
        if (valorAtributo2Carta1 < valorAtributo2Carta2) {
            printf("Carta 1 (%s) venceu neste atributo!\n", nomeCidade1);
            pontosCarta1++;
        } else if (valorAtributo2Carta2 < valorAtributo2Carta1) {
            printf("Carta 2 (%s) venceu neste atributo!\n", nomeCidade2);
            pontosCarta2++;
        } else {
            printf("Empate neste atributo!\n");
        }
    } else {
        if (valorAtributo2Carta1 > valorAtributo2Carta2) {
            printf("Carta 1 (%s) venceu neste atributo!\n", nomeCidade1);
            pontosCarta1++;
        } else if (valorAtributo2Carta2 > valorAtributo2Carta1) {
            printf("Carta 2 (%s) venceu neste atributo!\n", nomeCidade2);
            pontosCarta2++;
        } else {
            printf("Empate neste atributo!\n");
        }
    }

    // Soma dos valores dos atributos
    float somaCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
    float somaCarta2 = valorAtributo1Carta2 + valorAtributo2Carta2;

    printf("\n=== Resultado Final ===\n");
    printf("Pontos da Carta 1 (%s): %d\n", nomeCidade1, pontosCarta1);
    printf("Pontos da Carta 2 (%s): %d\n", nomeCidade2, pontosCarta2);
    printf("Soma dos atributos da Carta 1: %.2f\n", somaCarta1);
    printf("Soma dos atributos da Carta 2: %.2f\n", somaCarta2);
    
    printf("\nVencedor: ");
    if (pontosCarta1 > pontosCarta2) {
        printf("Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    } else {
        // Em caso de empate nos pontos, verifica a soma dos atributos
        if (somaCarta1 > somaCarta2) {
            printf("Carta 1 (%s) venceu a rodada pelo criterio de desempate (soma dos atributos)!\n", nomeCidade1);
        } else if (somaCarta2 > somaCarta1) {
            printf("Carta 2 (%s) venceu a rodada pelo criterio de desempate (soma dos atributos)!\n", nomeCidade2);
        } else {
            printf("Empate total!\n");
        }
    }

    return 0;
}
