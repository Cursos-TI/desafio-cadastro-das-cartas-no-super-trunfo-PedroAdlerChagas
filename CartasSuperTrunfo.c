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
 int opcao;
 int primeiro_atributo;
 int segundo_atributo;
 int resultado;
 int resultado2;

 densidade_populacional = (float) populacao / area;

 pib_per_capita = (float) populacao / pib;

 super_poder = (float) populacao + area + pib + pontos_turisticos + pib_per_capita + densidade_populacional;






 //Carta2:


 char estado2 = 'B';
 char codigo2[7] = "B02";
 char nome_da_cidade2[21] = "Salvador";
 int populacao2 = 2418000;
 float area2 = 693.8;
 float pib2 = 62.7;
 int pontos_turisticos2 = 15;
 float densidade_populacional2;
 float pib_per_capita2;
 float super_poder2;


 densidade_populacional2 = (float) populacao2 / area2;

 pib_per_capita2 = (float) populacao2 / pib2;

 super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + densidade_populacional2;



 //saida da carta 1

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
 
 printf("______________________________\n");
 



 //saida da carta 2

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

 printf("______________________________\n");


 //comaraçao das cartas

 int comparacao = (float) area > area2;
 printf("area > area2: %d\n" ,comparacao);

 int comparacao2 = (float) pib > pib2;
 printf("pib > pib2: %d\n" ,comparacao2);

 int comparacao3 = (float) densidade_populacional > densidade_populacional2;
 printf("densidade > densidade2: %d\n" ,comparacao3);

 int comparacao4 = (float) pib_per_capita > pib_per_capita2;
 printf("pib per capita > pib per capita2: %d\n" ,comparacao4); 

 int comparacao5 = (float) super_poder > super_poder2;
 printf("super poder > super poder2: %d\n" ,comparacao5);

 printf("populacao1 > que populacao2: %d\n", populacao > populacao2);
 printf("pontos turisticos1 < que pontos turisticos2: %d\n", pontos_turisticos < pontos_turisticos2);

 printf("______________________________\n");


 //resultados das comparacoes

 printf("população: carta 1 (fortaleza) VENCEU \n");
 printf("area: carta 2 (salvador) VENCEU \n");
 printf("pib: carta 1 (fortaleza) VENCEU \n");
 printf("pontos turisticos: carta 1 (fortalezaa) VENCEU \n");
 printf("densidade populacional: carta 1 (fortaleza) VENCEU \n");
 printf("pib per capita: carta 2 (salvador) VENCEU \n");
 printf("super poder: carta 1 (fortaleza) VENCEU \n");

 printf("______________________________\n");



 //comparação usando if else população

 if (populacao > populacao2) {
    printf("A carta 1 (fortaleza) venceu!\n");
    }

else  {
    printf("A carta 2 (salvador) venceu!\n");
}


//comparação usando if else area

 if (area > area2) {
    printf("A carta 1 (fortaleza) venceu!\n");
    }

else  {
    printf("A carta 2 (salvador) venceu!\n");
}



//comparação usando if else pib

 if (pib > pib2) {
    printf("A carta 1 (fortaleza) venceu!\n");
    }

else  {
    printf("A carta 2 (salvador) venceu!\n");
}


//comparação usando if else pontos turisticos


 if (pontos_turisticos > pontos_turisticos2) {
    printf("A carta 1 (fortaleza) venceu!\n");
    }

else  {
    printf("A carta 2 (salvador) venceu!\n");
}

printf("______________________________\n");


//Menu interarivo
//desafio aventureiro

printf("**Menu principal**\n");
printf("1 - comaparar area1 com area2\n");
printf("2 - comaparar população1 com população2\n");
printf("3 - comaparar pib1 com pib2\n");
printf("Escolha uma opção:\n");
scanf("%d", &opcao);

      
 switch (opcao)
 {
 case 1:
 if (area > area2) {
  printf("A carta 1 (fortaleza) venceu!\n");
  }

else  {
  printf("A carta 2 (salvador) venceu!\n");
}
  break;

 case 2 :
  
 if (populacao > populacao2) {
  printf("A carta 1 (fortaleza) venceu!\n");
  }

else  {
  printf("A carta 2 (salvador) venceu!\n");
}
  break;

 case 3:
 if (pib > pib2) {
  printf("A carta 1 (fortaleza) venceu!\n");
  }

else  {
  printf("A carta 2 (salvador) venceu!\n");
}
  break;
 
 
 default:
 printf("Opcao invalida\n");
  break;
 }

 printf("______________________________\n");


 //desafio mestre

 printf("*Bem-vindo ao jogo!*\n");
 printf("Para começar escolha dois atributos para a comparação!\n");
 printf("1- PIB (carta 1)\n");
 printf("2- Área (carta 1)\n");
 printf("Escolha o primeiro atributo:\n");
 scanf("%d", &primeiro_atributo);

 switch (primeiro_atributo)
 {
 case 1:
  printf("voce escolheu o atributo PIB\n");
  resultado = (pib > pib2);
  
  break;

  case 2:
  printf("voce escolheu o atributo AREA\n");
  resultado = (area > area2);

  break;
 
 default:
  break;
 }


 printf("1- PIB2 (carta 2)\n");
 printf("2- Área2 (carta 2)\n");
 printf("Escolha o segundo atributo:\n");
 scanf("%d", &segundo_atributo);

 if (primeiro_atributo != segundo_atributo)
 {
  printf("Escolha um atributo igual para comparar ");
 } else {
   
  switch (segundo_atributo)
 {
 case 1:
  printf("você escolheu o atributo PIB2\n");
  resultado2 = (pib > pib2);
  
  break;

  case 2:
  printf("Você escolheu o atributo AREA2\n");
  resultado2 = (area > area2);

  break;
 
 default:
  break;
 }

}

if (resultado)
{
  printf("A carta 1 VENCEU!\n");
} else
{
  printf("A carta 2 VENCEU!");
}


 
  
 
 



 
 
 
 
 
 

 

 



  return 0;

     
     }
