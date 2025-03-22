#include <stdio.h>
const float POL_EM_CM = 2.54;
const float PE_EM_POL = 12;

int main()
{
    int polegadas = 0;
    int pes = 0;


    printf("Entre com pes altura em pes + polegadas (ex.: 5 10): " );
    scanf("%d %d", &pes, &polegadas);

    float altura_em_cm = ((pes * PE_EM_POL) + polegadas) * POL_EM_CM;
    printf("Altura em metros: %.2f\n", altura_em_cm/100);


    return 0;
 }