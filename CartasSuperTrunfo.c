#include <stdio.h>
#include <string.h>

int main() {
    // Variavel para a primeiro carta
    char estado;
    char codigo[4]; 
    char codigo_completo[5]; 
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Variavel para a segunda carta
    char estado1;
    char codigo1[4];
    char codigo_completo1[5]; 
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Primeira Carta: 

    // Leitura dos dados: Estado 
    printf("Digite uma letra para o seu estado ex:[A-H]: \n");
    scanf(" %c", &estado); 
    printf("A letra do seu estado é: %c\n", estado);

    // Leitura dos dados: Codigo
    printf("Digite um codigo Ex:[01, 02, 03...]: \n");
    scanf("%s", codigo); 

    // Concatenação do estado + codigo
    sprintf(codigo_completo, "%c%s", estado, codigo); // Formatacao estado + codigo em codigo_completo
    printf("Seu codigo completo é: %s\n", codigo_completo);

    // Leitura dos dados: Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("Sua cidade é: %s\n", cidade);

    // Leitura dos dados: Polulação
    printf("Digite o número da populacao: \n");
    scanf("%d", &populacao);
    printf("Sua população é: %d\n", populacao);

    // Leitura dos dados: Area
    printf("Digite uma area: \n");
    scanf("%f", &area);
    printf("Sua area é: %f\n", area);

    // Leitura dos dados: PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Seu PIB é: %f\n", pib);

    // Leitura dos dados: Pontos turisticos
    printf("Digite o número de pontos turisticos visitados: \n");
    scanf("%d", &pontos_turisticos);
    printf("A quantidade de pontos turisticos visitados são: %d\n", pontos_turisticos);

    // Segunda carta

    // Leitura dos dados: Estado 
    printf("Digite uma letra para o seu estado ex:[A-H]: \n");
    scanf(" %c", &estado1); 
    printf("A letra do seu estado é: %c\n", estado1);

    // Leitura dos dados: Codigo
    printf("Digite um codigo Ex:[01, 02, 03...]: \n");
    scanf("%s", codigo1); 

    // Concatenação do estado1 + codigo1
    sprintf(codigo_completo1, "%c%s", estado1, codigo1); 
    printf("Seu codigo completo é: %s\n", codigo_completo1);

    // Leitura dos dados: Cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1); 
    printf("Sua cidade é: %s\n", cidade1);

    // Leitura dos dados: Polulação
    printf("Digite o número da populacao: \n");
    scanf("%d", &populacao1);
    printf("Sua população é: %d\n", populacao1);

    // Leitura dos dados: Area
    printf("Digite uma area: \n");
    scanf("%f", &area1);
    printf("Sua area é: %f\n", area1);

    // Leitura dos dados: PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Seu PIB é: %f\n", pib1);

    // Leitura dos dados: Pontos turisticos
    printf("Digite o número de pontos turisticos visitados: \n");
    scanf("%d", &pontos_turisticos1);
    printf("A quantidade de pontos turisticos visitados são: %d\n", pontos_turisticos1);

    return 0;
}
