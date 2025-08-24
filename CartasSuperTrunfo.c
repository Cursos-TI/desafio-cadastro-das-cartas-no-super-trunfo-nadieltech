#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

   //variaveis das cartas 1 e 2:
    char estado1[5], estado2[5];
    char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    int populaçao1, populaçao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2; 


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // cadastrando a primeira carta
    printf("Vamos começar o jogo\n Vamos cadrastar a primeira carta\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &estado1);
    printf("Digite o codigo da carta (A letra do Estado seguido de um numero de '01' a '04'): \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populaçao1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);
    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    // cadastrando a segunda carta
    printf("Agora vamos cadastrar a segunda carta \n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &estado2);
    printf("Digite o codigo da carta (A letra do Estado seguido de um numero de '01' a '04'): \n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populaçao2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);
    printf("Digite a area (em km²) da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //exibindo a carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n Codigo da carta: %s\n Cidade: %s\n", estado1, codigo1, cidade1);
    printf("Populaçao: %d\n Pontos turisticos: %d\n", populaçao1, pontosturisticos1);
    printf("Area(km²): %f\n PIB: %f\n", area1, pib1 );

    //exibindo a carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n Codigo da carta: %s\n Cidade: %s\n", estado2, codigo2, cidade2);
    printf("Populaçao: %d\n Pontos turisticos: %d\n", populaçao2, pontosturisticos2);
    printf("Area(km²): %f\n PIB: %f\n", area2, pib2);




    return 0;
}
