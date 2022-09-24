#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//sem utilizar o qsort

void ordem(int tam, float num[]);
void entrada(int tam, float num[]);

int main() {
    int tam;
    float *p;

    clock_t tempo;

    printf("Digite a quantidade de numeros para ordenar:");
    scanf("%d",&tam);

    p = malloc(tam * sizeof(float));

    entrada(tam,p);
    tempo=clock();
    ordem(tam,p);
    tempo=clock()-tempo;

    for(int i=0; i<tam; i++){
        printf("%.2f ",p[i]);
    }
    return 0;
}


void entrada(int tam, float num[]){
  printf("Digite os numeros para serem ordenados: \n");
  for(int i=0; i<tam; i++){
    scanf("%f", &num[i]);
  }
}

void ordem(int tam, float num[]){
  for( int i=0; i<tam; i++ ){
    for( int j=i+1; j<tam; j++ ){  
      if( num[i] > num[j] ){
        float aux;
        aux =num[i];
        num[i] = num[j];
        num[j] = aux;
      }
    }
  }
}


void ordem(int tam, float num[]){
  qsort(num, tam, sizeof(float), compara);
}