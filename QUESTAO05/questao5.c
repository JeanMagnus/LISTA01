#include <stdio.h>

int main(int argc, char const *argv[])
{

    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    /* O programa entrará em um laço e que rodará por 5 vezes
        1ª saída:
            i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = endereçoEmHexaDecimal(f + 0) = endereçoEmHexaDecimal
        2ª saída:
            i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = endereçoEmHexaDecimal(f + 1) = endereçoEmHexaDecimal
        3ª saída:
            i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = endereçoEmHexaDecimal(f + 2) = endereçoEmHexaDecimal
        4ª saída:
            i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = endereçoEmHexaDecimal(f + 3) = endereçoEmHexaDecimal
        5ª saída:
            i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = endereçoEmHexaDecimal(f + 4) = endereçoEmHexaDecimal
    */
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf("vet[%d] = %.1f",i, vet[i]);
        printf("*(f + %d) = %.1f",i, *(f+i));
        printf("&vet[%d] = %X",i, &vet[i]);
        printf("(f + %d) = %X",i, f+i);
    }
    return 0;
}