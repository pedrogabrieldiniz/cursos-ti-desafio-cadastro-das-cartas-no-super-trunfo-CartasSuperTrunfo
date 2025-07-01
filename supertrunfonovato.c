#include <stdio.h>

int main(){     
      
//variáveis da cidade 1
char nome[20] = "Sao Paulo";
char codigo[10] = "A01";
int populacao = 11895578;
float area = 1521202.0; 
float pib = 700000.0;
int pontos_turisticos = 15;

//variáveis da cidade 2
char nome2[20] = "Rio de Janeiro";
char codigo2[10] = "A02";
int populacao2 =  6211223;
float area2 = 4378017.2 ;
float pib2 = 658000.0;
int pontos_turisticos2 = 20; 


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
printf("Código: %s\n", codigo);
printf("População: %d\n", populacao);
printf("Área: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Pontos turísticos: %d\n", pontos_turisticos);

//exibir cidade 2
printf("\n--- Dados da Cidade 2 ---\n");
printf("Nome: %s\n", nome2);
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", pontos_turisticos2);

return 0;

}