#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    p == &i; // true ou 1: p é um ponteiro para o endereço da variavel i e &i é o endereço de i, então p == &i é true
    *p - *q; // -2: j - i: 5-3=-2 
    **&p; // 3, o valor de i - desreferênciação do ponteiro para inteiro p
    3 - *p/(*q) + 7; // 10 - (*p/*q) = 0, pois o resultado inteiro de 3/5 = 0,  então 3 + 7 = 10
    return 0;
}