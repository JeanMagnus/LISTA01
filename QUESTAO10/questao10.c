#include<stdlib.h>
#include<stdio.h>

int main(){
    char arrayChar[4];
    int arrayInt[4];
    float arrayFloat[4];
    double arrayDouble[4];

    for(int i=0;i<4;i++){
        printf("%d ",(arrayChar+i));
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",(arrayInt+i));
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",(arrayFloat+i));
        
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",(arrayDouble+i));
    }
    /*
    Os endereços foram:
        Para char: 6422284 6422285 6422286 6422287 
        Para int: 6422268 6422272 6422276 6422280
        Para float: 6422252 6422256 6422260 6422264
        Para:  double: 6422216 6422224 6422232 6422240

    Percebe-se a diferença nos endereços do tipo inteiro, pois não é acrescentado 2 bytes a cada elemento como na questão anterior,
    mas sim 4 bytes, pois é o tamanho máximo que um valor do tipo int pode assumir.
    */

  return(0);
}