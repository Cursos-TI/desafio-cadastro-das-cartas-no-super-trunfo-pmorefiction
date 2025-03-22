#include <stdio.h>

int main() {
    char codigo1[4], nome1[30], codigo2[4], nome2[30];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    //1ª carta
    printf("Digite o código da 1ª cidade: ");
    scanf("%3s", codigo1);
    printf("Digite o nome da 1ª cidade: ");
    scanf(" %[^\n]s", nome1);
    printf("Digite a população da 1ª cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da 1ª cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da 1ª cidade (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da 1ª cidade: ");
    scanf("%d", &pontos1);

    //2ª carta
    printf("\nDigite o código da 2ª cidade: ");
    scanf("%3s", codigo2);
    printf("Digite o nome da 2ª cidade: ");
    scanf(" %[^\n]s", nome2);
    printf("Digite a população da 2ª cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da 2ª cidade (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da 2ª cidade (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da 2ª cidade: ");
    scanf("%d", &pontos2);

    printf("\n--- Cartas Cadastradas ---\n");
    printf("\n--- Cidade 1 ---\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           codigo1, nome1, populacao1, area1, pib1, pontos1);

    printf("\n--- Cidade 2 ---\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n",
           codigo2, nome2, populacao2, area2, pib2, pontos2);

    return 0;
}
