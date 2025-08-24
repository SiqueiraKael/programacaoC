#include <stdio.h>

int main() { // Declarando variáveis a serem usadas.

    // Primera Carta //
    char estado1;
    char cod_Carta1[100];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;

    // Segunda Carta //
    char estado2;
    char cod_Carta2[100];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;

    // -------------------------------- // -----------------------------//

    // Input dos Valores - Primeira Carta//

    printf("     ↓     Insira os dados das cartas     ↓     \n");

    printf("               Primeira carta\n");

    printf("\n Insira o 1° Caractere da Cidade(Em maiúsculo): "); // Entrada de valor da V.estado1
    scanf(" %c", &estado1);

    printf("\n         Insira o código da carta: "); // Entrada de valor da V.cod_Carta1
    scanf("%s", cod_Carta1);

    printf("\nInsira o nome da cidade(Obs: digite o nome junto): "); // Entrada de valor da V.nomeCidade1
    scanf("%s", nomeCidade1);

    printf("\n       Insira o tamanho da população: "); // Entrada de valor da V.populaçao1
    scanf("%i", &populacao1);

    printf("\n            Insira a área(km²): "); // Entrada de valor da V.area1
    scanf("%f", &area1);

    printf("\n               Insira o PIB: "); // Entrada de valor da V.pib1
    scanf("%f", &pib1);

    printf("\n       Insira a Qtde de pontos turísticos: "); // Entrada de valor da V.numPontosTuristicos1
    scanf("%i", &numPontosTuristicos1);

    printf("\n");

    printf("\n// -------------------------------- // -----------------------------//\n");

    // Input dos Valores - Segunda carta //

    printf("\n               Segunda carta\n");

    printf("\n Insira o 1° Caractere da Cidade(Em maiúsculo): "); // Entrada de valor da V.estado1
    scanf(" %c", &estado2);

    printf("\n         Insira o código da carta: "); // Entrada de valor da V.cod_Carta1
    scanf("%s", cod_Carta2);

    printf("\nInsira o nome da cidade(Obs: digite o nome junto): "); // Entrada de valor da V.nomeCidade1
    scanf("%s", nomeCidade2);

    printf("\n       Insira o tamanho da população: "); // Entrada de valor da V.populaçao1
    scanf("%i", &populacao2);

    printf("\n            Insira a área(km²): "); // Entrada de valor da V.area1
    scanf("%f", &area2);

    printf("\n               Insira o PIB: "); // Entrada de valor da V.pib1
    scanf("%f", &pib2);

    printf("\n       Insira a Qtde de pontos turísticos: "); // Entrada de valor da V.numPontosTuristicos1
    scanf("%i", &numPontosTuristicos2);

    printf("\n");

    // -------------------------------- // -----------------------------//

    printf("\n// -------------------------------- // -----------------------------//\n");

    // Output //

    printf("\n\nCarta 1 >>>");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", cod_Carta1);
    printf("\nNome da cidade: %s", nomeCidade1);
    printf("\nPopulação: %i", populacao1);
    printf("\nÁrea: %.3f", area1);
    printf("\nPIB: %f", pib1);
    printf("\nNúmero de pontos Turísticos: %i", numPontosTuristicos1);

    printf("\n");

    printf("\n\nCarta 2 >>>");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", cod_Carta2);
    printf("\nNome da cidade: %s", nomeCidade2);
    printf("\nPopulação: %i", populacao2);
    printf("\nÁrea: %.3f", area2);
    printf("\nPIB: %f", pib2);
    printf("\nNúmero de pontos Turísticos: %i", numPontosTuristicos2);

    return 0;

}


