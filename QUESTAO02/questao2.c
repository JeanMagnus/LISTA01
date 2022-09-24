#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i=5, *p;
    p = &i;
    // p: endereço de i: 4094
    //*p+2: 7, é o valor de i + 2
    //**&p: 5, é o valor de i
    //3**p: 15, é o valor de i * 3
    //**&p+4: 9, é o valor de p + 4: 5+4 = 9
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    return 0;
}