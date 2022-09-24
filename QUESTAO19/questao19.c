
#include <stdio.h>
#include <stdlib.h>
#include <gc.h>
#include <assert.h>

int  main () {
        GC_INIT (); // inicializar LibGC
        int * p = ( int *) GC_MALLOC ( 1000 * sizeof ( int )); // a memória é alocada por meio da função GC_MALLOC.
        int * q = ( int *) GC_MALLOC ( 1000 * sizeof ( int ));
        * p = 50 ;
        * q = 25 ;
        int soma = * p + * q;
        printf ( " A soma e % d " , soma);
        return  0 ;
}