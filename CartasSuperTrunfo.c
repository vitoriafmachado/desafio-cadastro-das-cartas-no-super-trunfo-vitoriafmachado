#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[4];  // Nome da carta (como A01, A02, etc.)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

Carta baralho[4]; // Baralho com 4 cartas

// Função para cadastrar as cartas
void cadastrarCartas() {
    for (int i = 0; i < 4; i++) {
        printf("Cadastro da carta %d\n", i+1);
        printf("Digite o nome da carta (exemplo: A01, B02): ");
        scanf("%s", baralho[i].nome);
        printf("Digite a população da cidade: ");
        scanf("%d", &baralho[i].populacao);
        printf("Digite a área da cidade: ");
        scanf("%f", &baralho[i].area);
        printf("Digite o PIB da cidade: ");
        scanf("%f", &baralho[i].pib);
        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d", &baralho[i].pontos_turisticos);
        printf("------------------------------\n");
    }
}

// Função para exibir as cartas cadastradas
void exibirCartas() {
    printf("Cartas cadastradas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Carta %s\n", baralho[i].nome);
        printf("População: %d\n", baralho[i].populacao);
        printf("Área: %.2f\n", baralho[i].area);
        printf("PIB: %.2f\n", baralho[i].pib);
        printf("Pontos turísticos: %d\n", baralho[i].pontos_turisticos);
        printf("------------------------------\n");
    }
}

// Função para comparar as cartas de acordo com o atributo escolhido
void compararCartas(Carta c1, Carta c2) {
    int atributo;
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    scanf("%d", &atributo);

    if (atributo == 1) {
        if (c1.populacao > c2.populacao)
            printf("Carta %s vence!\n", c1.nome);
        else if (c1.populacao < c2.populacao)
            printf("Carta %s vence!\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (atributo == 2) {
        if (c1.area > c2.area)
            printf("Carta %s vence!\n", c1.nome);
        else if (c1.area < c2.area)
            printf("Carta %s vence!\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (atributo == 3) {
        if (c1.pib > c2.pib)
            printf("Carta %s vence!\n", c1.nome);
        else if (c1.pib < c2.pib)
            printf("Carta %s vence!\n", c2.nome);
        else
            printf("Empate!\n");
    } else if (atributo == 4) {
        if (c1.pontos_turisticos > c2.pontos_turisticos)
            printf("Carta %s vence!\n", c1.nome);
        else if (c1.pontos_turisticos < c2.pontos_turisticos)
            printf("Carta %s vence!\n", c2.nome);
        else
            printf("Empate!\n");
    } else {
        printf("Opção inválida!\n");
    }
}

// Função principal
int main() {
    int opcao;
    printf("Bem-vindo ao Super Trunfo de Cidades!\n");

    cadastrarCartas(); // Cadastro de cartas
    exibirCartas(); // Exibição das cartas cadastradas

    char cartaEscolhida1[4], cartaEscolhida2[4];
    Carta *carta1, *carta2;

    // Loop para jogar o Super Trunfo
    while (1) {
        printf("Escolha uma carta para o Jogador 1 (exemplo: A01): ");
        scanf("%s", cartaEscolhida1);

        // Buscar carta escolhida para Jogador 1
        for (int i = 0; i < 4; i++) {
            if (strcmp(baralho[i].nome, cartaEscolhida1) == 0) {
                carta1 = &baralho[i];
                break;
            }
        }

        printf("Escolha uma carta para o Jogador 2 (exemplo: A02): ");
        scanf("%s", cartaEscolhida2);

        // Buscar carta escolhida para Jogador 2
        for (int i = 0; i < 4; i++) {
            if (strcmp(baralho[i].nome, cartaEscolhida2) == 0) {
                carta2 = &baralho[i];
                break;
            }
        }

        // Comparação dos atributos
        compararCartas(*carta1, *carta2);

        printf("Deseja jogar novamente? (1 - Sim / 0 - Não): ");
        scanf("%d", &opcao);
        if (opcao == 0) break;
    }

    printf("Fim do jogo! Obrigado por jogar!\n");
    return 0;
}

