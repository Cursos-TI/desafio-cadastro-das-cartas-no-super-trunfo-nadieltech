#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Definição das variáveis de cada carta
    //código da cidade, nome, população, área, PIB, número de pontos turísticos etc..

    //variáveis das carta 1:
    char estado1;
    char codigo1[50], cidade1[50];
    int pontosturisticos1;
    unsigned long int populacao1;
    float area1, pib1; 
    float densidadepopulacional1, pibpercapita1;
    float inversodensidade1, superpoder1;

    // Variáveis da carta 2:
    char estado2;
    char codigo2[50], cidade2[50];
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2, pib2;
    float densidadepopulacional2, pibpercapita2;
    float inversodensidade2, superpoder2;


    // Cadastro das Cartas:
    //solicitando ao usuário as informações de cada carta
    
    // cadastrando a primeira carta
    printf("*Jogo do Super Trunfo* \n Vamos cadrastar a primeira carta: \n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%c", &estado1);
    printf("Digite o codigo da carta (letra do Estado seguido de um numero de '01' a '04'): \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    // Calculando a Densidade Populacional da primeira carta:
    densidadepopulacional1 = populacao1 / area1;

    // Calculando o Pib Per Capita da primeira carta:
    pibpercapita1 = pib1 / populacao1;

    // Calculando o inverso da Densidade Populacional da primeira carta:
    inversodensidade1 = 1.0 / densidadepopulacional1;

    // Calculando o Super Poder da primeira carta:
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + inversodensidade1;



    // cadastrando a segunda carta
    printf("Agora vamos cadastrar a segunda carta: \n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (letra do Estado seguido de um numero de '01' a '04'): \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    // Calculando a Densidade Populacional da segunda carta:
    densidadepopulacional2 = populacao2 / area2;

    // Calculando o Pib Per Capita da segunda carta:
    pibpercapita2 = pib2 / populacao2;

    // Calculando o inverso da Densidade Populacional da segunda carta:
    inversodensidade2 = 1.0 / densidadepopulacional2;

    // Calculando o Super Poder da segunda carta:
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + inversodensidade2;


    // Exibindo todas as informações de cada carta:
    
    //exibindo a carta 1
    printf(" Carta 1\n");
    printf(" Estado: %c\n",estado1);
    printf(" Codigo da carta: %s\n Cidade: %s\n", codigo1, cidade1);
    printf(" Populaçao: %lu\n Pontos turisticos: %d\n", populacao1, pontosturisticos1);
    printf(" Área: %f km²\n PIB: %f bilhões de reais\n", area1, pib1 );
    printf(" Densidade Populacional: %f hab/k²\n", densidadepopulacional1);
    printf(" PIB Per Capita: %f reais\n", pibpercapita1);
    printf(" Inverso da Densidade: %f\n Super Poder: %f\n", inversodensidade1, superpoder1);

    //exibindo a carta 2
    printf(" Carta 2\n");
    printf(" Estado: %c\n", estado2);
    printf(" Codigo da carta: %s\n Cidade: %s\n", codigo2, cidade2);
    printf(" Populaçao: %lu\n Pontos turisticos: %d\n", populacao2, pontosturisticos2);
    printf(" Área: %f km²\n PIB: %f bilhões de reais\n", area2, pib2);
    printf(" Densidade Populacional: %f hab/k²\n", densidadepopulacional2);
    printf(" PIB Per Capita: %f reais\n", pibpercapita2);
    printf(" Inverso da Densidade: %f\n Super Poder: %f\n", inversodensidade2, superpoder2);

    // Comparando e exibindo o resultado entre as duas cartas:
    printf("Comparação entre as cartas:\n");
    // Utilizando operador ternário

    populacao1 > populacao2 ? printf("População: Carta 1 venceu!\n") : printf("Populaçao: Carta 2 venceu!\n");

    area1 > area2 ? printf("Área: Carta 1 venceu!\n") : printf("Área: Carta 2 venceu!\n");

    pib1 > pib2 ? printf("PIB: Carta 1 venceu!\n") : printf("PIB: Carta 2 venceu!\n");

    pontosturisticos1 > pontosturisticos2 ? printf("Pontos Turísticos: Carta 1 venceu!\n") :
        printf("Pontos Turísticos: Carta 2 venceu!\n");

    densidadepopulacional1 < densidadepopulacional2 ? printf("Densidade Populacional: Carta 1 venceu!\n") :
        printf("Densidade Populacional: Carta 2 venceu!\n");

    pibpercapita1 > pibpercapita2 ? printf("PIB per Capita: carta 1 venceu!\n") : printf("PIB per Capita: Carta 2 venceu!\n");

    superpoder1 > superpoder2 ? printf("Super Poder: Carta 1 venceu!\n") : printf("Super Poder: carta 2 venceu!\n");

    /* Para a Densidade populacional, a carta com o menor valor vence,
    para os demais atributos a carta com o maior valor vence */

    return 0;
}
