#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código serve como base para o desenvolvimento do sistema de cadastro e comparação de cartas de cidades no estilo Super Trunfo.

int main()
{
    // Declaração das variáveis das duas cartas. Os valores iniciais são apenas para evitar lixo de memória.
    char estado1[5] = "a";
    char estado2[5] = "a";
    char codigo1[5] = "al";
    char codigo2[5] = "al";
    char cidade1[20] = "al";
    char cidade2[20] = "al";
    char pais1[20], pais2[20];
    int populacao1 = 0, populacao2 = 0;
    float area1 = 0, area2 = 0, carta1atrib1, carta2atrib1, carta1atrib2, carta2atrib2, somaatrib1, somaatrib2;
    float pib1 = 0, pib2 = 0;
    int pontostur1 = 0, pontostur2 = 0;
    float densidadepop1 = 0, densidadepop2 = 0;
    float pibcapita1 = 0, pibcapita2 = 0;
    int comparacao, comparacao2;

    // Cadastro dos dados da primeira carta
    printf("Cadastre os dados da primeira carta do jogo SuperTrunfo, lembre-se, sempre use ponto ao invés de vírgula nas informações que digitar.");

    printf("\n\nDigite qual o País da sua primeira carta: ");
    scanf("%s", pais1);

    printf("\nDigite duas letras que representem um Estado dessa carta: ");
    scanf("%s", estado1);

    printf("\nDigite o código da primeira carta, ele será a letra escolhida '%s', seguido de um número de 01 até 04, por exemplo %s01: ", estado1, estado1);
    scanf("%s", codigo1);

    printf("\nDigite o nome de uma cidade da primeira carta: ");
    scanf("%s", cidade1);

    printf("\nDigite quantos habitantes existem na cidade da primeira carta, digite apenas o número, não escreva nada além disso: ");
    scanf("%d", &populacao1);

    printf("\nDigite qual a área em km² da cidade da primeira carta: ");
    scanf("%f", &area1);

    printf("\nDigite qual o PIB 'Produto Interno Bruto', em reais, referente à cidade da primeira carta: ");
    scanf("%f", &pib1);

    printf("\nPara finalizar digite quantos pontos turísticos a cidade da primeira carta possui: ");
    scanf("%d", &pontostur1);

    // Cadastro dos dados da segunda carta
    printf("\nAgora vamos para a segunda carta, repita exatamente o mesmo processo. ");

    printf("\n\nDigite qual o País da sua segunda carta: ");
    scanf("%s", pais2);

    printf("\nDigite duas letras que representem um Estado dessa carta: ");
    scanf("%s", estado2);

    printf("\nDigite o código da segunda carta, ele será a letra escolhida '%s', seguido de um número de 01 até 04, por exemplo %s01: ", estado2, estado2);
    scanf("%s", codigo2);

    printf("\nDigite o nome de uma cidade da segunda carta: ");
    scanf("%s", cidade2);

    printf("\nDigite quantos habitantes existem na cidade da segunda carta, digite apenas o número, não escreva nada além disso: ");
    scanf("%d", &populacao2);

    printf("\nDigite qual a área em km² da cidade da segunda carta: ");
    scanf("%f", &area2);

    printf("\nDigite qual o PIB 'Produto Interno Bruto', em reais, referente à cidade da segunda carta: ");
    scanf("%f", &pib2);

    printf("\nPara finalizar digite quantos pontos turísticos a cidade da segunda carta possui: ");
    scanf("%d", &pontostur2);

    // Cálculo da densidade populacional e PIB per capita para cada carta
    densidadepop1 = populacao1 / area1; // densidade = população / área
    densidadepop2 = populacao2 / area2;
    pibcapita1 = pib1 / populacao1;     // PIB per capita = PIB / população
    pibcapita2 = pib2 / populacao2;

    // Exibição dos dados cadastrados das duas cartas
    printf("\nConfira abaixo os dados da primeira carta cadastrada: ");
    printf("\n\n País: %s \n Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %.2f km² \n PIB: %.2f reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f habitantes/km²\n PIB per Capita: %.2f reais/habitante", pais1, estado1, codigo1, cidade1, populacao1, area1, pib1, pontostur1, densidadepop1, pibcapita1);

    printf("\n\nConfira abaixo os dados da segunda carta cadastrada:");
    printf("\n\n País: %s \n Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %.2f km² \n PIB: %.2f reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f habitantes/km²\n PIB per Capita: %.2f reais/habitante\n\n", pais2, estado2, codigo2, cidade2, populacao2, area2, pib2, pontostur2, densidadepop2, pibcapita2);

    // Menu para escolha do primeiro atributo de comparação
    printf("\n\nEscolha qual atributo voce quer comparar: \n1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade populacional (menor valor vence)\n");
    scanf("%d", &comparacao);

    // Atribuição dos valores do primeiro atributo escolhido para cada carta
    switch (comparacao)
    {
    case 1:
        carta1atrib1 = (float) populacao1;
        carta2atrib1 = (float) populacao2;
        break;
    case 2:
        carta1atrib1 = area1;
        carta2atrib1 = area2;
        break;
    case 3:
        carta1atrib1 = pib1;
        carta2atrib1 = pib2;
        break;
    case 4:
        carta1atrib1 = (float) pontostur1;
        carta2atrib1 = (float) pontostur2;
        break;
    case 5:
        carta1atrib1 = densidadepop1;
        carta2atrib1 = densidadepop2;
        break;
    default:
        printf("Opção selecionada inválida!");
        return 0;
    }

    // Menu dinâmico para escolha do segundo atributo (não mostra o já escolhido)
    printf("\n\nEscolha o segundo atributo que voce quer comparar: ");
    if (comparacao != 1) printf("\n1 - População");
    if (comparacao != 2) printf("\n2 - Área");
    if (comparacao != 3) printf("\n3 - PIB");
    if (comparacao != 4) printf("\n4 - Número de pontos turísticos");
    if (comparacao != 5) printf("\n5 - Densidade populacional (menor valor vence)\n");
    scanf("%d", &comparacao2);

    // Impede que o mesmo atributo seja escolhido duas vezes
    if (comparacao == comparacao2)
    {
        printf("\nEscolha um atributo diferente");
        return 0;
    }

    // Atribuição dos valores do segundo atributo escolhido para cada carta
    switch (comparacao2)
    {
    case 1:
        carta1atrib2 = (float) populacao1;
        carta2atrib2 = (float) populacao2;
        break;
    case 2:
        carta1atrib2 = area1;
        carta2atrib2 = area2;
        break;
    case 3:
        carta1atrib2 = pib1;
        carta2atrib2 = pib2;
        break;
    case 4:
        carta1atrib2 = (float) pontostur1;
        carta2atrib2 = (float) pontostur2;
        break;
    case 5:
        carta1atrib2 = densidadepop1;
        carta2atrib2 = densidadepop2;
        break;
    default:
        printf("Opção selecionada inválida!");
        return 0;
    }

    // Inversão dos valores para densidade populacional, para que o menor valor vença na comparação individual
    if(comparacao == 5){
        carta1atrib1 = 1/carta1atrib1;
        carta2atrib1 = 1/carta2atrib1;
    }
    if(comparacao2 == 5){
        carta1atrib2 = 1/carta1atrib2;
        carta2atrib2 = 1/carta2atrib2;
    }

    // Comparação dos atributos individualmente e exibição do resultado
    if (carta1atrib1 > carta2atrib1)
    {
        if (carta1atrib2 > carta2atrib2)
        {
            printf("\nA carta %s venceu na comparação dos dois atributos\n", pais1);
        }
        else if (carta2atrib2 > carta1atrib2)
        {
            printf("\nA carta %s venceu no primeiro atributo e perdeu pra carta %s no segundo atributo\n", pais1, pais2);
        }
        else
        {
            printf("\nA carta %s venceu no primeiro atributo e as cartas empataram no segundo atributo\n", pais1);
        }
    }
    else if (carta2atrib1 > carta1atrib1)
    {
        if (carta2atrib2 > carta1atrib2)
        {
            printf("\nA carta %s venceu na comparação dos dois atributos\n", pais2);
        }
        else if (carta1atrib2 > carta2atrib2)
        {
            printf("\nA carta %s venceu no primeiro atributo e perdeu pra carta %s no segundo atributo\n", pais2, pais1);
        }
        else
        {
            printf("\nA carta %s venceu no primeiro atributo e as cartas empataram no segundo atributo\n", pais2);
        }
    }
    else
    {
        if (carta1atrib2 == carta2atrib2)
        {
            printf("\nAs cartas empataram nos dois atributos\n");
        }
        else if (carta1atrib2 > carta2atrib2)
        {
            printf("\nAs cartas empataram no primeiro atributo e a carta %s ganhou no segundo atributo\n", pais1);
        }
        else
        {
            printf("\nAs cartas empataram no primeiro atributo e a carta %s ganhou no segundo atributo\n", pais2);
        }
    }

    // Inversão novamente para retornar os valores originais antes da soma dos atributos
    if(comparacao == 5){
        carta1atrib1 = 1/carta1atrib1;
        carta2atrib1 = 1/carta2atrib1;
    }
    if(comparacao2 == 5){
        carta1atrib2 = 1/carta1atrib2;
        carta2atrib2 = 1/carta2atrib2;
    }

    // Soma dos dois atributos escolhidos para cada carta
    somaatrib1 = carta1atrib1 + carta1atrib2;
    somaatrib2 = carta2atrib1 + carta2atrib2;

    // Exibição do vencedor pela soma dos atributos
    if (somaatrib1 > somaatrib2)
    {
        printf("\nA carta %s venceu na soma\n", pais1);
    }
    else if (somaatrib1 < somaatrib2)
    {
        printf("\nA carta %s venceu na soma\n", pais2);
    }
    else
    {
        printf("\nAs cartas empataram na soma\n");
    }

    // Exibição dos valores dos atributos e das somas para cada carta
    printf("\nPrimeiro atributo da carta %s: %.2f\n",pais1, carta1atrib1);
    printf("\nSegundo Atributo da carta %s: %.2f\n",pais1, carta1atrib2);
    printf("\nPrimeiro atributo da carta %s: %.2f\n",pais2, carta2atrib1);
    printf("\nSegundo Atributo da carta %s: %.2f\n",pais2, carta2atrib2);
    printf("\nSoma númerica dos atributos da carta %s: %.2f\n", pais1, somaatrib1);
    printf("\nSoma númerica dos atributos da carta %s: %.2f\n", pais2, somaatrib2);

    return 0;
}
