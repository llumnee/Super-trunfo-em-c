#include <stdio.h>

int main() {

    char nomepais1[30], nomepais2[30];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;
    int escolhaatributo;

    //inserção de dados da carta 1
    //nome do país
    printf("Digite o nome do país: ");
    scanf("%s", nomepais1);

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

    //menu interativo
    printf("Escolha o critério de comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");   
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &escolhaatributo);
    
    switch (escolhaatributo) {
        //atributo população
        case 1:
        printf("O atributo utilizado foi população\n");
        printf("População de %s: %lu\n", nomepais1, populacao1);
        printf("População de %s: %lu\n", nomepais2, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu\n", nomepais1);
            } else if (populacao1 < populacao2) {
                printf("%s venceu\n", nomepais2);
            } else {
                printf("Empate\n");
            }
            break;
        //atributo área
        case 2:
        printf("O atributo utilizado foi área\n");
        printf("Área de %s: %f\n", nomepais1, area1);
        printf("Área de %s: %f\n", nomepais2, area2);
            if (area1 > area2) {
                printf("%s venceu\n", nomepais1);
            } else if (area1 < area2) {
                printf("%s venceu\n", nomepais2);
            } else {
                printf("Empate\n");
            }
            break;
        //atributo PIB
        case 3:
        printf("O atributo utilizado foi PIB\n");
        printf("PIB de %s: %f\n", nomepais1, pib1);   
        printf("PIB de %s: %f\n", nomepais2, pib2);
            if (pib1 > pib2) {
                printf("%s venceu\n", nomepais1);
            } else if (pib1 < pib2) {
                printf("%s venceu\n", nomepais2);
            } else {
                printf("Empate\n");
            }
            break;
        //atributo número de pontos turísticos
        case 4:
        printf("O atributo utilizado foi número de pontos turísticos\n");
        printf("Número de pontos turísticos de %s: %d\n", nomepais1, pontos1);
        printf("Número de pontos turísticos de %s: %d\n", nomepais2, pontos2);
            if (pontos1 > pontos2) {
                printf("%s venceu\n", nomepais1);
            } else if (pontos1 < pontos2) {
                printf("%s venceu\n", nomepais2);
            } else {
                printf("Empate\n");
            }
            break;
        //atributo densidade demográfica
        case 5:
        printf("O atributo utilizado foi densidade demográfica\n");
        printf("Densidade demográfica de %s: %f\n", nomepais1, densidade1);
        printf("Densidade demográfica de %s: %f\n", nomepais2, densidade2);
            if (densidade1 > densidade2) {
                printf("%s venceu\n", nomepais1);
            } else if (densidade1 < densidade2) {
                printf("%s venceu\n", nomepais2);
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opção inválida\n");
    }    
        
return 0;
    
}
