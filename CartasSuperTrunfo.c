#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    char pais[60], estado[60], codigo[5], cidade[100];
    int populacao, pontosTuristicos;
    float area, pib;

    printf("**Carta 01**\n");
    printf("INSIRA OS DADOS PARA ADICIONAR A SUA CARTA\n");

    printf("País: ");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0';

    printf("Estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Código: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    getchar();
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n**CARTA 01 CADASTRADA**\n");
    printf("- País: %s\n- Código: %s\n- Estado: %s\n- Cidade: %s\n", pais, codigo, estado, cidade);
    printf("- População: %d\n- Área: %.2f\n- PIB: %.2f\n- Número de Pontos Turísticos: %d\n", populacao, area, pib, pontosTuristicos);

    printf("\n**Carta 02**\n");
    printf("INSIRA OS DADOS PARA ADICIONAR A SUA CARTA\n");

    printf("País: ");
    getchar();
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0';

    printf("Código: ");
    scanf("%s", codigo);

    printf("Estado: ");
    getchar();
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Cidade: ");
    getchar();
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n**CARTA 02 CADASTRADA**\n");
    printf("- País: %s\n- Código: %s\n- Estado: %s\n- Cidade: %s\n", pais, codigo, estado, cidade);
    printf("- População: %d\n- Área: %.2f\n- PIB: %.2f\n- Número de Pontos Turísticos: %d\n", populacao, area, pib, pontosTuristicos);

    return 0;
}