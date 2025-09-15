#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste João Victor

float densidade1, densidade2, ppc1, ppc2;
int popu1, popu2;
float area1, area2;
float pib1, pib2;

float Calculos(){
    //calculo de densidade populacional:
    densidade1 = popu1 / area1;
    densidade2 = popu2 / area2;

    // calculo de PIB per Capita:
    ppc1 = pib1 / popu1;
    ppc2 = pib2 / pib2;
}

int main() {
    // Definição das variaveis: 
    char estado1, estado2;
    char cod1[50], cod2[50];
    char nome1[50], nome2[50];
    int popu1, popu2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float densidade1, densidade2, ppc1, ppc2;

    // Cadastro da Carta 1:
    printf("Carta 1:\n");

    printf("Informe qual o estado:\n");
    scanf("%c", &estado1);

    printf("Informe o Codigo:\n");
    scanf("%s", cod1);

    printf("Informe a cidade:\n");
    scanf("%s", nome1);

    printf("Informe o numero da população:\n");
    scanf("%d", &popu1);

    printf("informe a área:\n");
    scanf("%f", &area1);

    printf("Informe o PIB:\n");
    scanf("%f", &pib1);

    printf("Informe o numero de ponto de turismo:\n");
    scanf("%d", &npt1);

    // Espaço para dividir os cadastro
    printf("------------------------------------\n");

    // Cadastro da Carta2:
    printf("Carta 2:\n");

    printf("Informe qual o estado:\n");
    scanf(" %c", &estado2);

    printf("Informe o codigo:\n");
    scanf("%s", cod2);

    printf("Informe a cidade:\n");
    scanf("%s", nome2);

    printf("Informe a população:\n");
    scanf("%d", &popu2);

    printf("Informe a área:\n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos:\n");
    scanf("%d", &npt2);

    // Função para calculos
    Calculos();

    // Divisão 
    printf("-----------------------------------------\n");

    // Exibição dos Dados da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", popu1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de ponto turistico: %d\n", npt1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %f\n", ppc1);

    //Divisão
    printf("----------------------------------------------\n");

    // Exibição dos Dados da Carta 2: 
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", popu2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de ponto turistico: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %f\n", ppc2);

    return 0;
}

