#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){

    /* Abaixo declaramos as variaveis referentes as cartas 1 e 2 do supertrunfo sendo cada variavel referente ao proprio nome que ela recebe*/
    /*Quando declarei as variaveis coloquei um valor inicial para elas para nao conterem 'lixo', esse valor sera alterado e insignificante durante o codigo*/


char estado1[5] = "a";
char estado2[5] = "a";
char codigo1[5] = "al";
char codigo2[5] = "al";
char cidade1[20] = "al";
char cidade2[20] = "al";
int populacao1 = 0, populacao2= 0;
float area1 = 0, area2 = 0;
float pib1 = 0, pib2 = 0;
int pontostur1 = 0, pontostur2 = 0;
float densidadepop1 = 0, densidadepop2 = 0;
float pibcapita1 = 0, pibcapita2 = 0;

//Aqui começamos a digitar as informações da primeira carta

 printf("Cadastre os dados da primeira carta do jogo SuperTrunfo, lembre-se, sempre use ponto ao invés de vírgula nas informações que digitar.");

printf("\n\nDigite as letras que representem o Estado da primeira carta: "); 
scanf("%s", estado1);

printf("\nDigite o código da primeira carta, ele será a letra escolhida '%s', seguido de um número de 01 até 04, por exemplo %s01: ", estado1, estado1); 
scanf("%s", codigo1);

printf("\nDigite o nome da cidade da primeira carta: ");
scanf ("%s", cidade1);

printf("\nDigite quantos habitantes existem na cidade da primeira carta, digite apenas o número, não escreva nada além disso: ");
scanf("%d", &populacao1);

printf("\nDigite qual a área em km² da cidade da primeira carta: ");
scanf("%f", &area1);

printf("\nDigite qual o PIB 'Produto Interno Bruto', em reais, referente à cidade da primeira carta: ");
scanf("%f", &pib1);

printf("\nPara finalizar digite quantos pontos turísticos a cidade da primeira carta possui: ");
scanf("%d", &pontostur1);


//Aqui começamos a digitar as informações da segunda carta

printf("\nAgora vamos para a segunda carta, repita exatamente o mesmo processo. ");

printf("\n\nDigite as letras que representem o Estado da primeira carta: "); 
scanf("%s", estado2);

printf("\nDigite o código da segunda carta, ele será a letra escolhida '%s', seguido de um número de 01 até 04, por exemplo %s01: ", estado2, estado2); 
scanf("%s", codigo2);

printf("\nDigite o nome da cidade da segunda carta: ");
scanf ("%s", cidade2);

printf("\nDigite quantos habitantes existem na cidade da segunda carta, digite apenas o número, não escreva nada além disso: ");
scanf("%d", &populacao2);

printf("\nDigite qual a área em km² da cidade da segunda carta: ");
scanf("%f", &area2);

printf("\nDigite qual o PIB 'Produto Interno Bruto', em reais, referente à cidade da segunda carta: ");
scanf("%f", &pib2);

printf("\nPara finalizar digite quantos pontos turísticos a cidade da segunda carta possui: ");
scanf("%d", &pontostur2);

//Abaixo calcularemos a densidade populacional e o pib per capita
//densidade populacional = populacao / area
//pib per capita = pib da cidade / populacao da cidade

densidadepop1 = populacao1 / area1; //como area ja esta declarada em float nao precisaremos usar casting
densidadepop2 = populacao2 / area2;
pibcapita1 = pib1 / populacao1; //como pib ja esta declarado em float nao precisaremos do casting
pibcapita2 = pib2 / populacao2;

//Abaixo o programa mostrara os dados das duas cartas

printf("\nConfira abaixo os dados da primeira carta cadastrada: ");

printf("\n\n Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %.2f km² \n PIB: %.2f reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f habitantes/km²\n PIB per Capita: %.2f reais/habitante", estado1, codigo1, cidade1, populacao1, area1, pib1, pontostur1, densidadepop1, pibcapita1 );

printf("\n\nConfira abaixo os dados da segunda carta cadastrada:");

printf("\n\n Estado: %s \n Código da carta: %s \n Nome da cidade: %s \n População: %d habitantes \n Área: %.2f km² \n PIB: %.2f reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f habitantes/km²\n PIB per Capita: %.2f reais/habitante\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontostur2, densidadepop2, pibcapita2 );

//Usaremos o atributo densidade populacional para ver qual carta venceu
//Aplicaremos a estrutura if/ elseif/ else, nao vou usar apenas if/else porque temos a opcao de empate
// estou usando o return 0 no final de cada seletor para o codigo terminar ali

if(densidadepop1 < densidadepop2){
    printf("Carta 1 - %s(%s): %.2f", cidade1, estado1, densidadepop1  );
    printf("\nCarta 2 - %s(%s): %.2f", cidade2, estado2, densidadepop2  );
    printf("\nResultado: A densidade populacional da carta 1 venceu");
return 0;
}
else if(densidadepop1 == densidadepop2){
    printf("Carta 1 - %s(%s): %.2f", cidade1, estado1, densidadepop1  );
    printf("\nCarta 2 - %s(%s): %.2f", cidade2, estado2, densidadepop2  );
    printf("\nResultado: A densidade populacional das duas cartas empataram");
return 0 ;

}
else{
    printf("Carta 1 - %s(%s): %.2f", cidade1, estado1, densidadepop1  );
    printf("\nCarta 2 - %s(%s): %.2f", cidade2, estado2, densidadepop2  );
    printf("\nResultado: A densidade populacional da carta 2 venceu");
    return 0;

}

return 0;


}










