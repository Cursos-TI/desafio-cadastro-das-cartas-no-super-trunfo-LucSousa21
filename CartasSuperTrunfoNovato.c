#include <stdio.h>


int main() {
        
    // Declaração das variáveis da carta 1    
    char cidade1[30];
    char estado1;

    int codigo_carta1;
    int populacao1;
    int ponto_turistico1;

    float area1;
    float pib1;

    // Entrada de dados da Carta 1    
    printf("Informe os atributos da Carta 1\n\n");

    printf("Nome da cidade:\n");
    scanf(" %s", cidade1);  // limitar leitura a evitar overflow

    printf("Informe uma letra entre A e H:\n");
    scanf(" %c", &estado1);

    printf("Escolha um número entre 1 a 4:\n");
    scanf(" %d", &codigo_carta1);

    printf("Habitantes:\n");
    scanf(" %d", &populacao1);

    printf("Área em km²:\n");
    scanf(" %f", &area1);

    printf("PIB:\n");
    scanf(" %f", &pib1);

    printf("Pontos turísticos:\n");
    scanf(" %d", &ponto_turistico1);


    // Declaração das variáveis da Carta 2    
    char cidade2[30];
    char estado2;
    int codigo_carta2;
    int populacao2;
    int ponto_turistico2;
    float area2;
    float pib2;

    // Entrada de dados da Carta 2        
    printf("Informe os atributos da Carta 2\n\n");

    printf("Nome da cidade:\n");
    scanf(" %s", cidade2);

    printf("Informe uma letra entre A e H:\n");
    scanf(" %c", &estado2);

    printf("Escolha um número entre 1 a 4:\n");
    scanf(" %d", &codigo_carta2);

    printf("Habitantes:\n");
    scanf(" %d", &populacao2);

    printf("Área em km²:\n");
    scanf(" %f", &area2);

    printf("PIB:\n");
    scanf(" %f", &pib2);

    printf("Pontos turísticos:\n");
    scanf(" %d", &ponto_turistico2);


    // Exibição dos dados da Carta 1    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c-%d\n", estado1, codigo_carta1);
    printf("PIB: %.2f\n", pib1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);


    // Exibição dos dados da Carta 2    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c-%d\n", estado2, codigo_carta2);
    printf("PIB: %.2f\n", pib2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);

    return 0;
}

