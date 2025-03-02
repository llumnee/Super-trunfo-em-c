#include <stdio.h>

int main() {

    char nome1[30];
    char nome2[30];
    int populacao1;
    int populacao2;
    int pontos1;
    int pontos2;
    float area1;
    float area2;
    float pib1;
    float pib2;

    printf("Digite o nome do primeiro país: ");
    scanf("%s", &nome1);

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%e", &area1);
   
    printf("Digite o PIB: ");
    scanf("%e", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    
    
    printf("Digite o nome do segundo país: ");
    scanf("%s", &nome2);

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%e", &area2);

    printf("Digite o PIB: ");
    scanf("%e", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);
    

       printf("O nome do primeiro país é: %s\n", nome1);
       printf("A quantidade de habitantes é: %d\n", populacao1);
       printf("A área é: %e\n", area1);
       printf("O PIB é: %e\n", pib1);
       printf("O número de pontos turísticos é: %d\n", pontos1);


       printf("O nome do segundo país é: %s\n", nome2);
       printf("A quantidade de habitantes é: %d\n", populacao2);
       printf("A área é: %e\n", area2);
       printf("O PIB é: %e\n", pib2);
       printf("O número de pontos turísticos é: %d\n", pontos2);

    return 0;
}
