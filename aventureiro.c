#include <stdio.h>

int main(){     
      
//variáveis da cidade 1
char nome[20] = "Sao Paulo";
char codigo[10] = "A01";
int populacao = 2700000;
float area = 314.9; 
float pib =  67000.0;
int pontos_turisticos = 15;
double densidade_populacional;
double PIB_per_capital;

//calculo da densidade1
densidade_populacional = populacao / area;
PIB_per_capital = pib / populacao;

//variáveis da cidade 2
char nome2[20] = "Rio de Janeiro";
char codigo2[10] = "A02";
int populacao2 =  1960000;
float area2 =  434.9;
float pib2 = 98000.0;
int pontos_turisticos2 = 20; 
double densidade_populacional2;
double PIB_per_capital2;

 //calculo da densidade2
densidade_populacional2 = populacao2 / area2;
PIB_per_capital2 = pib2 / populacao2;


// Leitura dos dados da cidade 1
printf("digite o nome da cidade:");
scanf(" %[^\n]", nome);

printf("digite o codigo da cidade:");
scanf("%s", codigo);

printf("digite a populaca da cidade:");
scanf("%d", &populacao);

printf("digite area da cidade:");
scanf("%f", &area);

printf("digite pib da cidade:");
scanf("%f", &pib);

printf("digite o pontos turisticos:");
scanf("%d", &pontos_turisticos);

// Leitura dos dados da cidade 2
printf("digite o nome da cidade:");
scanf(" %[^\n]", nome2);

printf("digite o codigo da cidade:");
scanf("%s", codigo2);

printf("digite a populaca da cidade:");
scanf("%d", &populacao2);

printf("digite area da cidade:");
scanf("%f", &area2);

printf("digite pib da cidade:");
scanf("%f", &pib2);

printf("digite o pontos turisticos:");
scanf("%d", &pontos_turisticos2);

//exibir cidade 1
printf("\n\n--- Dados da Cidade 1 ---\n");
printf("Nome: %s\n", nome);
printf("Codigo: %s\n", codigo);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos turisticos: %d\n", pontos_turisticos);
printf("Desnsidade populacioal d cidade de sao paulo:%1.f\n",densidade_populacional );
printf("PIB per capital:%.2f\n", PIB_per_capital);

//exibir cidade 2
printf("\n\n--- Dados da Cidade 2 ---\n");
printf("Nome: %s\n", nome2);
printf("Codigo: %s\n", codigo2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turisticos: %d\n", pontos_turisticos2);
printf("Desnsidade populacioal d cidade de rio de janeiro:%1.f\n",densidade_populacional2 );
printf("PIB per capital:%.2f\n", PIB_per_capital2);

return 0;

}