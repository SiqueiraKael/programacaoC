#include <stdio.h>

int main() { // Declarando variáveis a serem usadas.

    // Primera Carta //
    char estado1, cod_Carta1[100], nomeCidade1[100];
    int populacao1, numPontosTuristicos1;
    float area1, pib1, densPopulacional1, pibPerCapta1;

    // Segunda Carta //
    char estado2, cod_Carta2[100], nomeCidade2[100];
    int populacao2, numPontosTuristicos2;
    float area2, pib2, densPopulacional2, pibPerCapta2;

    // -------------------------------- // -----------------------------//

    // Input dos Valores - Primeira Carta//

    printf("     ↓     Insira os dados das cartas     ↓     \n");

    printf("\n               Primeira carta\n");

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

    // Input dos Valores - Segunda carta //lear

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

    // Cálculo PIB per capta e Dens.Populacional

    densPopulacional1 = populacao1 / area1;
    densPopulacional2 = populacao2 / area2;
    
    pibPerCapta1 = pib1 / populacao1;
    pibPerCapta2 = pib2 / populacao2;


    printf("\n// -------------------------------- // -----------------------------//\n");

    // Output //

    printf("\n\nCarta 1 >>>");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", cod_Carta1);
    printf("\nNome da cidade: %s", nomeCidade1);
    printf("\nPopulação: %i", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %2.f", pib1);
    printf("\nNúmero de pontos Turísticos: %i", numPontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densPopulacional1);
    printf("\nPIB per Capta: %.2f reais", pibPerCapta1);

    printf("\n");

    printf("\n\nCarta 2 >>>");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", cod_Carta2);
    printf("\nNome da cidade: %s", nomeCidade2);
    printf("\nPopulação: %i", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %2.f", pib2);
    printf("\nNúmero de pontos Turísticos: %i", numPontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densPopulacional2);
    printf("\nPIB per Capta: %.2f reais", pibPerCapta2);

    return 0;

}


