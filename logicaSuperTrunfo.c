#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para armazenar os dados do Super Trunfo
    // As variáveis foram definidas de acordo com o contexto do jogo Super Trunfo
    // Carta 1
    char estado1;
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Limpa a tela e exibe o cabeçalho do programa
    printf("\033[H\033[J");
    printf("Desafio Super Trunfo\n");
    printf("********************\n\n");

    // Solicita ao usuário que insira os dados da primeira carta
    printf("Carta 1:\n");

    printf("Por favor, digite o Estado, \n");
    printf("sendo uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Por favor, digite um código de 2 dígitos,\n");
    printf("sendo um número de 01 a 04: \n");
    scanf("%2s", codigo1);

    printf("Por favor, digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);  // Lê até o final da linha, permitindo espaços

    printf("Por favor, digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Por favor, digite a área da cidade (em Km2): \n");
    scanf("%f", &area1);

    printf("Por favor, digite o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Por favor, digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Limpa a tela e exibe o cabeçalho novamente
    printf("\033[H\033[J");
    printf("Desafio Super Trunfo\n");
    printf("********************\n\n");

    // Solicita os dados da segunda carta
    printf("Carta 2:\n");

    printf("Por favor, digite o Estado, \n");
    printf("sendo uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Por favor, digite um código de 2 dígitos,\n");
    printf("sendo um número de 01 a 04: \n");
    scanf("%2s", codigo2);

    printf("Por favor, digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2); // Lê até o final da linha, permitindo espaços

    printf("Por favor, digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Por favor, digite a área da cidade (em Km2): \n");
    scanf("%f", &area2);

    printf("Por favor, digite o PIB da cidade (em bilhões de Reais): \n");
    scanf("%f", &pib2);

    printf("Por favor, digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional:
    // Sugestão: Calcule a densidade populacional dividindo a população pela área da cidade.
    // Armazene o resultado em uma variável separada para cada carta.
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    
    // Cálculo do PIB per Capita:
    // Sugestão: Calcule o PIB per capita dividindo o PIB pela população da cidade.
    // Armazene o resultado em uma variável separada para cada carta.
    float pib_per_capita1 = pib1 / populacao1; 
    float pib_per_capita2 = pib2 / populacao2; 

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Limpa a tela e exibe o cabeçalho para listar as cartas
    printf("\033[H\033[J");
    printf("Desafio Super Trunfo\n");
    printf("********************\n\n");

    // Exibe os dados da primeira carta
    printf("--- Carta 1:\n");   
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);    
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f KM2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita1);

    // Exibe os dados da segunda carta
    printf("--- Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f KM2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita2);


    // Definição do atributo Super Trunfo:
    // Sugestão: Determine qual carta possui o maior valor em um atributo específico (Exemplo: maior PIB per capita).
    // A carta com o maior valor nesse atributo será designada como "Super Trunfo".
    // Atributo escolhido: Pontos Turísticos
    
    printf("--- SUPER TRUNFO ---\n");
    printf("--- PONTOS TURÍSTICOS ---\n");
    printf("Pontos Turísticos Carta 1: %d\n", pontos_turisticos1);
    printf("Pontos Turísticos Carta 2: %d\n", pontos_turisticos2);

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("\nA Carta 1 é a Super Trunfo!\n\n");
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("\nA Carta 2 é a Super Trunfo!\n\n");
    } else {
        printf("\nAmbas as cartas têm o mesmo número de pontos turísticos!\n\n");
    }   


    return 0;
}

