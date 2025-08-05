 #include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1 = 'F';
    char codigo1[] = "F01";
    char nome1[] = "Florianopolis";
    int populacao1 = 537211;
    float area1 = 674.844;
    float pib1 = 23550000000.0; // R$ 23,55 bilhões
    int pontos_turisticos1 = 100;
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Dados da Carta 2
    char estado2 = 'P';
    char codigo2[] = "P02";
    char nome2[] = "Porto Alegre";
    int populacao2 = 1332570;
    float area2 = 496.827;
    float pib2 = 81560000000.0; // R$ 81,56 bilhões
    int pontos_turisticos2 = 32;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1 / 1000000000.0);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2 / 1000000000.0);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}

