#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Definição das variáveis de cada carta
    //código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //variáveis das carta 1:
    char estado1;
    char codigo1[50], cidade1[50];
    int populacao1, pontosturisticos1;
    float area1, pib1; 

    // Variáveis da carta 2:
    char estado2;
    char codigo2[50], cidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;


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
    scanf("%d", &populacao1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    // cadastrando a segunda carta
    printf("Agora vamos cadastrar a segunda carta: \n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (letra do Estado seguido de um numero de '01' a '04'): \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    // Exibindo todas as informações de cada carta:
    
    //exibindo a carta 1
    printf(" Carta 1\n");
    printf(" Estado: %c\n",estado1);
    printf(" Codigo da carta: %s\n Cidade: %s\n", codigo1, cidade1);
    printf(" Populaçao: %d\n Pontos turisticos: %d\n", populacao1, pontosturisticos1);
    printf(" Area(km²): %f\n PIB: %f\n", area1, pib1 );

    //exibindo a carta 2
    printf(" Carta 2\n");
    printf(" Estado: %c\n", estado2);
    printf(" Codigo da carta: %s\n Cidade: %s\n", codigo2, cidade2);
    printf(" Populaçao: %d\n Pontos turisticos: %d\n", populacao2, pontosturisticos2);
    printf(" Area(km²): %f\n PIB: %f\n", area2, pib2);




    return 0;
}
