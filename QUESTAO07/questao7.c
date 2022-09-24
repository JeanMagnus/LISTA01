#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mat[4] = {1,2,3,4,5}, *p, x;

    printf("%d \n", mat + 1 );

    /*
        p = mat + 1; válida: p recebe o endereço do segundo elemento do array
        p = mat++; inválida: O operador ++ é utilizado em valores e mat é um array
        p = ++mat; inválida: O operador ++ é utilizado em valores e mat é um array
        x = (*mat)++; válida: x recebe a soma o valor do primeiro elemento do array + 1
    */
    return 0;
}