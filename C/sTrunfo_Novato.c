#include <stdio.h>

int main() { // Declarando variáveis a serem usadas.



    // Primera Carta //
    char estado1, cod_Carta1[100], nomeCidade1[100];
    unsigned long int populacao1;
    int numPontosTuristicos1;
    float area1, pib1, densPopulacional1, pibPerCapta1, superpoder1;

    // Segunda Carta //
    char estado2, cod_Carta2[100], nomeCidade2[100];
    unsigned long int populacao2;
    int numPontosTuristicos2;
    float area2, pib2, densPopulacional2, pibPerCapta2, superpoder2;

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

    printf("\n Insira o 1° Caractere da Cidade(Em maiúsculo): "); // Entrada de valor da V.estado2
    scanf(" %c", &estado2);

    printf("\n         Insira o código da carta: "); // Entrada de valor da V.cod_Carta2
    scanf("%s", cod_Carta2);

    printf("\nInsira o nome da cidade(Obs: digite o nome junto): "); // Entrada de valor da V.nomeCidade2
    scanf("%s", nomeCidade2);

    printf("\n       Insira o tamanho da população: "); // Entrada de valor da V.populaçao2
    scanf("%i", &populacao2);

    printf("\n            Insira a área(km²): "); // Entrada de valor da V.area2
    scanf("%f", &area2);

    printf("\n               Insira o PIB: "); // Entrada de valor da V.pib2
    scanf("%f", &pib2);

    printf("\n       Insira a Qtde de pontos turísticos: "); // Entrada de valor da V.numPontosTuristicos2
    scanf("%i", &numPontosTuristicos2);

    printf("\n");

    // -------------------------------- // -----------------------------//

    // Cálculo PIB per capta e Dens.Populacional

    densPopulacional1 = populacao1 / area1;
    densPopulacional2 = populacao2 / area2;
    
    pibPerCapta1 = pib1 / populacao1;
    pibPerCapta2 = pib2 / populacao2;

    superpoder1 = populacao1 + area1 + pib1 + numPontosTuristicos1 +  pibPerCapta1 - densPopulacional1;
    superpoder2 = populacao2 + area2 + pib2 + numPontosTuristicos2 +  pibPerCapta2 - densPopulacional2;


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
    printf("\nSuper Poder: %.2f)", superpoder1);

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
    printf("\nPIB per Capta: %.2f reais\n", pibPerCapta2);
    printf("\nSuper Poder: %.2f)", superpoder2);

    printf("\n// -------------------------------- // -----------------------------//\n");
    
    // Comparação das cartas //

    printf("\nComparação das Cartas: ");

    if (populacao1 > populacao2) // Comparação População
    {
        printf("\npopulação: Carta 1 venceu {%d}", populacao1 > populacao2);
    } else {
        printf("\npopulação: Carta 2 venceu {%d}", populacao2 > populacao1);
    }
    
    if (area1 > area2) // Comparação Área
    {
        printf("\nÁrea: Carta 1 venceu {%d}", area1 > area2);
    } else {
        printf("\nÁrea: Carta 2 venceu {%d}", area2 > area1);
    }

    if (pib1 > pib2) // Comparação PIB
    {
        printf("\nPIB: Carta 1 venceu {%d}", pib1 > pib2);
    } else {
        printf("\nPIB: Carta 2 venceu {%d}", pib2 > pib1);
    }

    if (numPontosTuristicos1 > numPontosTuristicos2) // Comparação Pontos Turísticos
    {
        printf("\nPontos Turísticos: Carta 1 venceu {%d}", numPontosTuristicos1 > numPontosTuristicos2);
    } else {
        printf("\nPontos Turísticos: Carta 2 venceu {%d}", numPontosTuristicos2 > numPontosTuristicos1);
    }

    if (densPopulacional1 < densPopulacional2) // Comparação Densidade Populacional
    {
        printf("\nDensidade Populacional: Carta 1 venceu {%d}", densPopulacional1 < densPopulacional2);
    } else {
        printf("\nDensidade Populacional: Carta 2 venceu {%d}", densPopulacional2 < densPopulacional1);
    }

    if (pibPerCapta1 > pibPerCapta2) // Comparação PIB per Capta
    {
        printf("\nPIB per Capta: Carta 1 venceu {%d}", pibPerCapta1 > pibPerCapta2);
    } else {
        printf("\nPIB per Capta: Carta 2 venceu {%d}", pibPerCapta2 > pibPerCapta1);
    }

    if (superpoder1 > superpoder2) // Comparação Super pPder
    {
        printf("\nSuper Poder: Carta 1 venceu {%d}", superpoder1 > superpoder2);
    } else {
        printf("\nSuper Poder: Carta 2 venceu {%d}\n", superpoder2 > superpoder1);
    }

    return 0;

}


