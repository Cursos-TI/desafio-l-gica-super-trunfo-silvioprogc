#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];           
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;               
    float pib1, pib2;               
    int pontosTuristicos1, pontosTuristicos2; 
    float densidadeP1, densidadeP2;
    float pibPerc1, pibPerc2;
    float SuperPoder1, SuperPoder2;
    int opcao;

// Inserindo dados da primeira Carta
    printf(" **** Cadastrar 1ª Carta ****\n\n");
    printf("Digite a letra do Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

// Inserindo dados da segunda Carta   
    printf("\n**** Cadastrar 2ª Carta ****\n\n");
    printf("Digite a letra do Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

// Cálculo Densidade Populacional
    densidadeP1 = (float)populacao1 / area1;
    densidadeP2 = (float)populacao2 / area2;

// Cálculo PIB per Capita
    pibPerc1 = (pib1 * 1000000000.0) / (float)populacao1;
    pibPerc2 = (pib2 * 1000000000.0) / (float)populacao2;

// Cálculo do Super Poder
    SuperPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + (1.0 / densidadeP1);
    SuperPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + (1.0 / densidadeP2);

// Imprimir dados das cartas
    printf("\n---Carta 1---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP1);
    printf("PIB per Capita: %.2f reais\n", pibPerc1);

    printf("\n---Carta 2---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP2);
    printf("PIB per Capita: %.2f reais\n", pibPerc2);

    printf("\n==== MENU DE COMPARAÇÃO ====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s:\n\n", cidade1, cidade2);

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if(populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f Km²\n", cidade1, area1);
            printf("%s: %.2f Km²\n", cidade2, area2);
            if(area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if(area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f Bilhões\n", cidade1, pib1);
            printf("%s: %.2f Bilhões\n", cidade2, pib2);
            if(pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if(pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", cidade1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/Km²\n", cidade1, densidadeP1);
            printf("%s: %.2f hab/Km²\n", cidade2, densidadeP2);
            // regra inversa: menor densidade vence
            if(densidadeP1 < densidadeP2)
                printf("Vencedor: %s\n", cidade1);
            else if(densidadeP2 < densidadeP1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", cidade1, pibPerc1);
            printf("%s: %.2f reais\n", cidade2, pibPerc2);
            if(pibPerc1 > pibPerc2)
                printf("Vencedor: %s\n", cidade1);
            else if(pibPerc2 > pibPerc1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", cidade1, SuperPoder1);
            printf("%s: %.2f\n", cidade2, SuperPoder2);
            if(SuperPoder1 > SuperPoder2)
                printf("Vencedor: %s\n", cidade1);
            else if(SuperPoder2 > SuperPoder1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! \n");
    }

    return 0;
}
