#include <stdio.h>


int main() {
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];           
    char cidade1[50];      
    char cidade2[50];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1;
    float area2;               
    float pib1;
    float pib2;               
    int pontosTuristicos1; 
    int pontosTuristicos2; 
    float densidadeP1;
    float densidadeP2;
    float pibPerc1;
    float pibPerc2;
    float SuperPoder1;
    float SuperPoder2;

//Inserindo dados da primeira Carta
printf(" **** Cadastrar 1ª Carta ****\n");
printf("\n");
printf("Digite a letra do Estado (letra de A a H): ");
scanf(" %c", &estado1);
printf("Digite o Código da Carta: ");
scanf("%s", &codigo1);
printf("Digite a Cidade: ");
scanf("%s", &cidade1);
printf("População: ");
scanf("%lu", &populacao1);
printf("Área: ");
scanf("%f", &area1);
printf("PIB: ");
scanf("%f", &pib1);
printf("Pontos Turisticos: ");
scanf(" %d", &pontosTuristicos1);
     
    //Inserindo dados da Segunda Carta   
    
    printf("**** Cadastrar 2ª Carta ****\n");
    printf("\n");
    printf("Digite a letra do Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

//Calculo Densidade Populacional
densidadeP1 = (float)populacao1 / area1;
densidadeP2 = (float)populacao2 / area2;
//Calculo PIB per Capita
pibPerc1 = (pib1 * 1000000000.0) / (float)populacao1;
pibPerc2 = (pib2 * 1000000000.0) / (float)populacao2;

//Calculo do super poder
SuperPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + (1.0 / densidadeP1);
SuperPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + (1.0 / densidadeP2);

//Imprimir dados da primeira carta
printf("---Carta 1---\n");
printf("Estado: %c\n" , estado1);
printf("Codigo: %s\n" , codigo1);
printf("Cidade: %s\n" , cidade1);
printf("População: %lu\n" , populacao1);
printf("Área: %.2f Km²\n" , area1);
printf("PIB: %.2f Bilhões de reais\n" , pib1);
printf("Pontos Turisticos: %d\n" , pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP1);
printf("PIB per Capita: %.2f reais\n", pibPerc1);

 //Imprimir dados da segunda carta  
    printf("---Carta 2---\n");
    printf("Estado: %c\n" , estado2);
    printf("Codigo: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %lu\n" , populacao2);
    printf("Área: %f Km²\n" , area2);
    printf("PIB: %f Bilhões de reais\n" , pib2);
    printf("Pontos Turisticos: %d\n" , pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP2);
    printf("PIB per Capita: %.2f reais\n", pibPerc2);
    printf("\n");
/*
printf("***** Comparação de Cartas *****\n");
printf("Populacao: Carta 1 venceu %d\n", populacao1 > populacao2);
printf("Área: Carta 1 venceu: %d\n", area1 > area2);
printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
printf("Pontos Turistico: Carta 1 venceu: %d\n", pontosTuristicos1 > pontosTuristicos2);
printf("Densidade Populacional: Carta 2 venceu: %d\n", densidadeP1 < densidadeP2);
printf("PIB per Capita: Carta 1 venceu %d\n", pibPerc1 > pibPerc2);
printf("Super Poder: Carta 1 venceu %d\n", SuperPoder1 > SuperPoder2);
*/

if (populacao1 > populacao2){
        printf("A Carta 1 venceu População de: %d\n", populacao1);
    }else{
        printf("A Carta 2 venceu População de: %d\n", populacao2);
    }

   if (area1 > area2){
        printf("A Carta 1 venceu Área de: %.2f Km²\n", area1);
    }else{
        printf("A Carta 2 venceu Área de: %.2f Km²\n", area2);
    }

    if (pib1 > pib2){
        printf("A Carta 1 venceu PIB de: %.2f Bilhões de reais\n", pib1);
    }else{
        printf("A Carta 2 venceu PIB de:  %.2f Bilhões de reais\n", pib2);
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("A Carta 1 venceu Nº de Pontos Turisticos: %d\n", pontosTuristicos1);
    }else{
        printf("A Carta 1 venceu Nº de Pontos Turisticos: %d\n", pontosTuristicos2);
    }

    if (densidadeP1 < densidadeP2){
        printf("A Carta 1 venceu Densidade Populacional de: %.2f hab/Km²\n", densidadeP1);
    }else{
        printf("A Carta 2 venceu Densidade Populacional de: %.2f hab/Km²\n", densidadeP2);
    }

    if (pibPerc1 > pibPerc2){
        printf("A Carta 1 venceu PIB per Capita de: %.2f reais\n", pibPerc1);
    }else{
        printf("A Carta 2 venceu PIB per Capita de: %.2f reais\n", pibPerc2);
    }

    if (SuperPoder1> SuperPoder2){
        printf("A Carta 1 venceu o se Super Poder e: %.2f\n", SuperPoder1);
    }else{
        printf("A Carta 1 venceu o se Super Poder e: %.2f\n", SuperPoder2);
    }

    return 0;
}