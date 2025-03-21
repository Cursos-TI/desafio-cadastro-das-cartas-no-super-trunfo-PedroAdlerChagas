#include <stdio.h>



int main() {
    

    //carta1:
 
 
    char estado = 'C';
    char codigo[4] = "C01";
    char nome_da_cidade[20] = "Fortaleza";
    float populacao = 2429678;
    float populacao = 2.429;
    float area = 313.8;
    double pib = 7343612800000;
    float pib = 73.43;
    int pontos_turisticos = 20;
    float densidade_populacional;
    float pib_per_capita;

    densidade_populacional = (float) area / populacao;

    pib_per_capita = (float) pib / populacao;

  

    //Carta2:


    char estado2 = 'B';
    char codigo2[7] = "B02";
    char nome_da_cidade2[21] = "Salvador";
    float populacao2 = 14.14;
    float area2 = 567.295;
    double pib2 = 114.4;
    float populacao2 = 2.418;
    float area2 = 693.8;
    float pib2 = 62.7;
    int pontos_turisticos2 = 15;
    float densidade_populacional2;
    float pib_per_capita2;


    
    densidade_populacional2 = (float) area2 / populacao2;

    pib_per_capita2 = (float) pib2 / populacao2;


    //saida da carta1

    printf("Estado: %c\n", estado);
    printf("codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("população: %f\n", populacao);
    printf("Area: %f\n", area);
    printf("Area: %f km²\n", area);
    printf("pib: %f\n", pib);
    printf("numero de pontos turisticos: %d\n", pontos_turisticos);    
    printf("numero de pontos turisticos: %d\n", pontos_turisticos);  
    printf("densidade populacional= %.2f km²\n", densidade_populacional);
    printf("PIB per capita= %.2f\n", pib_per_capita);

  

    //saida da carta2

    printf("Estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", nome_da_cidade2);
    printf("população: %f\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Area: %fkm²\n", area2);
    printf("pib: %f\n", pib2);
    printf("quantidade de pontos turisticos: %d\n", pontos_turisticos2);
    printf("densidade populacional= %.2f km²\n", densidade_populacional2);
    printf("PIB per capita= %.2f\n", pib_per_capita2);

    return 0;
}
