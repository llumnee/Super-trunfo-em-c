#include <stdio.h>

int main() {

    char nome1[30], nome2[30];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;
    int superpoder1, superpoder2;
    int comparacao1,  comparacao2, comparacao3, comparacao4, comparacao5, comparacao6;

    //inserção de dados do primeiro país
    //nome
    printf("Digite o nome do primeiro país: ");
    scanf("%s", nome1);

    //população
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    //cálculo dos super poderes
    superpoder1 = populacao1 + area1 + pib1 - densidade1;
    superpoder2 = populacao2 + area2 + pib2 - densidade2;

    //comparação das cartas
    comparacao1 = area1 > area2;
    comparacao2 = populacao1 >  populacao2;
    comparacao3 = pib1 > pib2;
    comparacao4 = densidade1 < densidade2;
    comparacao5 = pontos1 > pontos2;
    comparacao6 = superpoder1 > superpoder2;

    //exibição de resultados
    printf("Comparação de Cartas:\n");
    printf("Área: %d\n", comparacao1);
    printf("População %d\n", comparacao2);
    printf("PIB %d\n", comparacao3);
    printf("Densidade %d\n", comparacao4);
    printf("Pontos turísticos %d\n", comparacao5);
    printf("Super Poder %d\n", comparacao6);
        
return 0;
    
}
