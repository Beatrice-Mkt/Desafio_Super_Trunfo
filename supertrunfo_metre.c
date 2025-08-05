 #include <stdio.h>

int main() {
    // Carta 1 - Florianópolis
    char estado1 = 'F';
    char codigo1[] = "F01";
    char nome1[] = "Florianopolis";
    unsigned long int populacao1 = 537211;
    float area1 = 674.844;
    float pib1 = 23550000000.0; // em reais
    int pontos_turisticos1 = 100;
    float densidade1 = 796.05;
    float pib_per_capita1 = 45602.98;

    // Carta 2 - Porto Alegre
    char estado2 = 'P';
    char codigo2[] = "P02";
    char nome2[] = "Porto Alegre";
    unsigned long int populacao2 = 1332570;
    float area2 = 496.827;
    float pib2 = 81560000000.0; // em reais
    int pontos_turisticos2 = 32;
    float densidade2 = 2689.94;
    float pib_per_capita2 = 49740.90;

    // Super Poder (inverso da densidade incluído)
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1 / densidade1) + pib_per_capita1;
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1 / densidade2) + pib_per_capita2;

    // Exibição das cartas
    printf("Comparando Cartas:\n\n");

    printf("População: %d\n", populacao1 > populacao2); // 1 se Carta 1 vence
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}
