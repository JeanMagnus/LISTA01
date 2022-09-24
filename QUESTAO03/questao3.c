#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=5, j=10, *p, *q;
     i = (*p)++;

    printf("%i\n", i);
/*
    p = i; p recebe o valor de i
    q = &j; q recebe o endereço de j
    p = &*&i; p recebe o endereço de i (endereço da desreferenciação)
    i = (*&)j; não faz sentido
    i = *&j; i recebe o valor de j
    i = *&*&j; i recebe o valor de j (desreferenciação duas vezes)
    q = *p; q recebe o valor de p
    i = (*p)++ + *q; operaçao com lixo de memoria (inadequado)
    atribuições ilegais:
    i = (*&)j;
    i = (*p)++ + *q (essa irá compilar, mas não tem utilidade e ainda é inadequado)
*/
    return 0;
}