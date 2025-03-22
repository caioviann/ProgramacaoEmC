#include <stdio.h>

int main()
{
    float altura, largura, profundidade;
    int quantidade_de_caixas = 0;
    float custo_m_quadrado = 0, custo_total = 0;
    printf("Entre com a altura (m): ");
    scanf("%f", &altura);

    printf("Entre com a largura (m): ");
    scanf("%f", &largura);

    printf("Entre com a profundidade (m): ");
    scanf("%f", &profundidade);

    float area = 2 * (profundidade * largura + largura * altura + profundidade * altura);

    // printf("A area eh: %g", area_total);

    float volume = altura * largura * profundidade;

    // printf("\nO volume eh: %g", volume);

    printf("Area eh  %2.f m2 e o volume eh %f m3.\n\n", area, volume);

    
    printf("Entre com a quantidade de caixas: ");
    scanf("%d", &quantidade_de_caixas);

    return 0;
} 