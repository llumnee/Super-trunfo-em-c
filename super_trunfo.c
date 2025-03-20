#include <stdio.h>

int main() {

    char nomepais1[30], nomepais2[30];
    char nomecidade1[30], nomecidade2[30];
    char nomeestado1[30], nomeestado2[30];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;
    int superpoder1, superpoder2;
    int comparacao1,  comparacao2, comparacao3, comparacao4, comparacao5, comparacao6;

    //inserção de dados da carta 1
    //nome do país
    printf("Digite o nome do país: ");
    scanf("%s", nomepais1);

    //nome do estado
    printf("Digite o nome do estado: ");
    scanf("%s", nomeestado1);

    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);
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

    //inserção de dados da carta 2
    //nome do país
    printf("Digite o nome do país: ");
    scanf("%s", nomepais2);

    //nome do estado
    printf("Digite o nome do estado: ");
    scanf("%s", nomeestado2);

    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);

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
    densidade1 = (float) populacao1 / area1;
    pibpercapta1 = pib1 / (float) populacao1;
    densidade2 = (float) populacao2 / area2;
    pibpercapta2 = pib2 / (float) populacao2;

    //cálculo dos super poderes
    superpoder1 = (float) populacao1 + area1 + pib1 - densidade1;
    superpoder2 = (float) populacao2 + area2 + pib2 - densidade2;

    //comparação das cartas
    comparacao1 = area1 > area2;
    comparacao2 = populacao1 >  populacao2;
    comparacao3 = pib1 > pib2;
    comparacao4 = densidade1 < densidade2;
    comparacao5 = pontos1 > pontos2;
    comparacao6 = superpoder1 > superpoder2;

    //exibição da comparação
    printf("Área da carta 1 - %s: %.0f\n", nomepais1, area1);
    printf("Área da carta 2 - %s: %.0f\n", nomepais2, area2);

    //carta vencedora
    if (area1 > area2) {
        printf("A carta 1 (%s) venceu!", nomepais1);
    } else {
        printf("A carta 2 (%s) venceu!", nomepais2);
    }
        
return 0;
    
}
