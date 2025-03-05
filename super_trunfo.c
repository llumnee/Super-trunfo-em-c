#include <stdio.h>

int main() {

    char nome1[30], nome2[30];
    int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;

    //inserção de dados do primeiro país

    //nome
    printf("Digite o nome do primeiro país: ");
    scanf("%s", nome1);

    //população
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao1);

    //área
    printf("Digite a área: ");
    scanf("%f", &area1);

    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    //pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    //inserção de dados do segundo país

    //nome
    printf("Digite o nome do segundo país: ");
    scanf("%s", nome2);

    //população
    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao2);

    //área
    printf("Digite a área: ");
    scanf("%f", &area2);

    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    //pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    //cálculos de densidade e pib per capta 
    densidade1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;

    //saída de dados do primeiro país
    printf("O nome do primeiro país é: %s\n", nome1);
    printf("A quantidade de habitantes é: %d\n", populacao1);
    printf("A área é: %.3f\n", area1);
    printf("O PIB é: %.3f\n", pib1);
    printf("O número de pontos turísticos é: %d\n", pontos1);
    printf("A densidade populacional é: %.3f\n", densidade1);
    printf("O PIB per capita é: %.3f\n", pibpercapta1);

    //saída de dados do segundo país
    printf("O nome do segundo país é: %s\n", nome2);
    printf("A quantidade de habitantes é: %d\n", populacao2);
    printf("O PIB é: %.3f\n", pib2);
    printf("A área é: %.3f\n", area2);
    printf("O número de pontos turísticos é: %d\n", pontos2);
    printf("A densidade populacional é: %.3f\n", densidade2);
    printf("O PIB per capita é: %.3f\n", pibpercapta2);
    
return 0;
    
}
