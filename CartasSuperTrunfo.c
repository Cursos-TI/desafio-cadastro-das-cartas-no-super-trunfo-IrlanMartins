#include <stdio.h>
#include <locale.h>
#include <string.h>

    int main() {
    char pais [60], estado [60], codigo [5], cidade [100];
    unsigned int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    
    printf("**Carta 01**\n");
    printf("INSIRA OS DADOS PARA ADICONAR A SUA CARTA\n\n");

    printf("País: \n");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais,"\n")] = '\0';
   
    printf("Estado: \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Código: \n");
    scanf("%s", codigo);
    getchar();

    printf("Cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    getchar();

    printf("**CARTA 01 CADASTRADA**\n\n");

    printf("**Carta 02**\n");
    printf("INSIRA OS DADOS PARA ADICONAR A SUA CARTA\n\n");
    getchar();
    
    printf("País: \n");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais,"\n")] = '\0';
   
    printf("Estado: \n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Código: \n");
    scanf("%s", codigo);
    getchar();

    printf("Cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("**CARTA 02 CADASTRADA**\n\n");

    printf(" - AS CARTAS FORAM CADASTRADAS COM SUCESSO!! -\n\n");

    printf(" - Carta 01 - \n");
    printf(" - País: %s\n - Código: %s\n - Estado: %s\n - Cidade: %s\n", pais, codigo, estado, cidade);
    printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Números de Pontos Turísticos: %d\n", populacao1, area1, pib1, pontosTuristicos1); 
    
    float densidadePopulacional1 = populacao1 / area1;
    float pibPercapta1 = pib1 / populacao1;
    
    printf(" - Densidade Populacional: %.2f Habitantes/Km²\n", densidadePopulacional1);
    printf(" - PIB Percapita: %.2f milhões/habitantes\n", pibPercapta1);

    float inversodensidadePopulacional1 = 1.0 / densidadePopulacional1;
    float SuperPodercarta1 = populacao1 + area1 + pib1 + pontosTuristicos1 + inversodensidadePopulacional1;
    
    printf(" - Super Poder da carta 1: %.2f\n\n", SuperPodercarta1);

    printf(" - Carta 02 - \n");
    printf(" - País: %s\n - Código: %s\n - Estado: %s\n - Cidade: %s\n", pais, codigo, estado, cidade);
    printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Números de POntos Túristicos: %d\n", populacao2, area2, pib2, pontosTuristicos2);

    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapta2 = pib2 / populacao2;
    
    printf(" - Densidade Populacional: %.2f Habitantes/Km²\n", densidadePopulacional2);
    printf(" - PIB Percapita: %.2f milhões/habitantes\n", pibPercapta2);
    
    float inversodensidadePopulacional2 = 1.0 / densidadePopulacional2;
    float SuperPodercarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + inversodensidadePopulacional2;

    printf(" - Super Poder da carta 2: %.2f\n\n", SuperPodercarta2);

    printf(" - QUEM VENCEU?\n");
    printf("legenda: (1) = Carta 01 venceu / (0) = Carta 02 venceu\n ***MENOR DENSIDADE POPULACIONAL VENCE***\n\n");
    getchar();

    printf(" Super Poder da CARTA 01 > Super Poder da CARTA 02: %d\n", SuperPodercarta1 > SuperPodercarta2);
    printf(" População da CARTA 01 > População da CARTA 02: %d\n", populacao1 > populacao2);
    printf(" Área  da CARTA 01 > Área da CARTA 02: %d\n", area1 > area2);
    printf(" PIB da CARTA 01 > PIB da CARTA 02: %d\n", pib1 > pib2);
    printf(" Pontos Turísticos da CARTA 01 > Pontos Turísticos da CARTA 02: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf(" Densidade Populacional da CARTA 01 < Densidade Populacional da CARTA 02: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf(" PIB Per Capita da CARTA 01 > PIB Per Capita da CARTA 02: %d\n\n", pibPercapta1 > pibPercapta2);
    return 0;
}
