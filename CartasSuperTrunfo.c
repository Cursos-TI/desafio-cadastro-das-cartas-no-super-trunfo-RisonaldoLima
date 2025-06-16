#include <stdio.h>
#include <windows.h>

int main() {
    // Ativa UTF-8 no terminal
    SetConsoleOutputCP(CP_UTF8);

    // Variáveis Carta 1
    char estado1;
    char codigo1[4];
    char codigo_completo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis Carta 2
    char estado2;
    char codigo2[4];
    char codigo_completo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada - Carta 1
    printf("Digite uma letra para o estado da Carta 1 (ex: A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (ex: 01, 02, 03...):\n");
    scanf("%s", codigo1);
    sprintf(codigo_completo1, "%c%s", estado1, codigo1);

    printf("Digite o nome da cidade da Carta 1:\n");
    getchar(); // limpa o buffer antes de fgets
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // remove \n

    printf("Digite o número da população da Carta 1:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área da Carta 1:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1:\n");
    scanf("%d", &pontos_turisticos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // Entrada - Carta 2
    printf("\nDigite uma letra para o estado da Carta 2 (ex: A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: 01, 02, 03...):\n");
    scanf("%s", codigo2);
    sprintf(codigo_completo2, "%c%s", estado2, codigo2);

    printf("Digite o nome da cidade da Carta 2:\n");
    getchar(); // limpa o buffer
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número da população da Carta 2:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área da Carta 2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibição Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_completo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_completo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu? %s\n", (populacao1 > populacao2) ? "Sim" : "Não");
    printf("Área: Carta 1 venceu? %s\n", (area1 > area2) ? "Sim" : "Não");
    printf("PIB: Carta 1 venceu? %s\n", (pib1 > pib2) ? "Sim" : "Não");
    printf("Pontos Turísticos: Carta 1 venceu? %s\n", (pontos_turisticos1 > pontos_turisticos2) ? "Sim" : "Não");
    printf("Densidade (menor vence): Carta 1 venceu? %s\n", (densidade1 < densidade2) ? "Sim" : "Não");
    printf("PIB per Capita: Carta 1 venceu? %s\n", (pib_per_capita1 > pib_per_capita2) ? "Sim" : "Não");
    printf("Super Poder: Carta 1 venceu? %s\n", (super_poder1 > super_poder2) ? "Sim" : "Não");

    return 0;
}
