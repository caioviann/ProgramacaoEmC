#include <stdio.h>

int main()
{
    float altura, largura, profundidade;
    printf("Entre com a altura (m): ");
    scanf("%f", &altura);

    printf("Entre com a largura (m): ");
    scanf("%f", &largura);

    printf("Entre com a profundidade (m): ");
    scanf("%f", &profundidade);

    float area_total = 2 * (profundidade * largura + largura * altura + profundidade * altura);

    printf("A area eh: %g", area_total);

    float volume = altura * largura * profundidade;

    printf("\nO volume eh: %g", volume);
    
    return 0;
} 