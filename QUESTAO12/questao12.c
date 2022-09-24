/*
Ponteiros para funções em C serve principalmente para definir, em tempo de execução,
qual função será executada, sem a necessidade de escrever o nome da função,
de forma explícita naquele ponto do código.
Ponteiros para funções podem ser passados como argumentos para outras funções,
e a função apontada pode ser chamada a partir de seu ponteiro.
*/
#include <stdio.h>


int Print()
{
    printf("Hello word\n");
}

int VerSoma(int x, float z)
{
    printf("%.2f\n", x + z);
}

int main( int argc, char const *argv[])
{
    void (*PontPFuncSemParmt) ();
    int (*PontPFuncComParmt)(int, float);

    PontPFuncSemParmt = Print; // define qual para função o ponteiro aponta
    (*PontPFuncSemParmt) (); // realiza a chamada da função através do ponteiro

    PontPFuncComParmt = VerSoma; // define qual para função o ponteiro aponta
    (*PontPFuncComParmt) (3,2.45); // realiza a chamada da função através do ponteiro

}