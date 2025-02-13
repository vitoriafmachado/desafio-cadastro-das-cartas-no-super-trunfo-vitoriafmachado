#include <stdio.h>

int main() {
    // Definição de variáveis para armazenar os dados da cidade
    char codigo[4];  // Código da cidade (Exemplo: "A01")
    char nome[50];   // Nome da cidade
    int populacao;   // População
    float area;      // Área em km²
    double pib;      // PIB em bilhões
    int pontos_turisticos; // Número de pontos turísticos

    // Solicitação dos dados ao usuário
    printf("Cadastro de Cartas - Super Trunfo (Países)\n");

    printf("Digite o código da cidade (Ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);  // Permite ler espaços no nome

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n Carta Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("\n✅ Cadastro finalizado!\n");

    return 0;
}
