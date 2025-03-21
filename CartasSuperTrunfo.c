#include <stdio.h>

    
     int main() {


 //carta1:
 
 
 char estado = 'C';
 char codigo[4] = "C01";
 char nome_da_cidade[20] = "Fortaleza";
 int populacao = 2429678;
 float area = 313.8;
 float pib = 73.43;
 int pontos_turisticos = 20;
 float densidade_populacional;
 float pib_per_capita;
 float super_poder;

 densidade_populacional = (float) area / populacao;

 pib_per_capita = (float) pib / populacao;

 super_poder = (float) populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_populacional;






 //Carta2:


 char estado2 = 'B';
 char codigo2[7] = "B02";
 char nome_da_cidade2[21] = "Salvador";
 int populacao2 = 2418000;
 float area2 = 567.295;
 float pib2 = 62.7;
 int pontos_turisticos2 = 15;
 float densidade_populacional2;
 float pib_per_capita2;
 float super_poder2;


 densidade_populacional2 = (float) area2 / populacao2;

 pib_per_capita2 = (float) pib2 / populacao2;

 super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;




 //saida da carta1

 printf("Estado: %c\n", estado);
 printf("codigo: %s\n", codigo);
 printf("Nome da cidade: %s\n", nome_da_cidade);
 printf("população: %d\n", populacao);
 printf("Area: %f km²\n", area);
 printf("pib: %f\n", pib);
 printf("numero de pontos turisticos: %d\n", pontos_turisticos);    
 printf("densidade populacional= %f km²\n", densidade_populacional);
 printf("PIB per capita= %f\n", pib_per_capita);
 printf("super poder: %f\n", super_poder);
 



 //saida da carta2

 printf("Estado: %c\n", estado2);
 printf("codigo: %s\n", codigo2);
 printf("nome da cidade: %s\n", nome_da_cidade2);
 printf("população: %d\n", populacao2);
 printf("Area: %fkm²\n", area2);
 printf("pib: %f\n", pib2);
 printf("quantidade de pontos turisticos: %d\n", pontos_turisticos2);
 printf("densidade populacional= %f km²\n", densidade_populacional2);
 printf("PIB per capita= %f\n", pib_per_capita2);
 printf("super poder2: %f\n", super_poder2);


 //comparaçao das cartas

 printf("Populacao > Populacao2: %ld\n", populacao > populacao2);
 printf("Area < Area2: %f\n", area < area2);
 printf("Pib > Pib2: %f\n", pib > pib2);
 printf("Pontos turisticos > pontos turisticos2: %d\n", pontos_turisticos > pontos_turisticos2);
 printf("Pib per capita < Pib per capita2: %f\n", pib_per_capita > pib_per_capita2);
 printf("Densidade populacional > Densidade populacional2: %f\n", densidade_populacional > densidade_populacional2);
 printf("Super poder1  > Super poder2: %f\n", super_poder > super_poder2);
 



     return 0;

     
     }
