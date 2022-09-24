#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//utilizando o qsort

int compara(const void*x, const void*y); 
void ordem(int tam, float num[]);
void entrada(int tam, float num[]);

int main() {
    int tam;
    float *p;

    clock_t tempo;

    printf("Informe a quantidade de numeros para ordenar:");
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

int compara(const void*x, const void*y){ 
  float fx = *(const float *)x,fy = *(const float*)y; 
  return (fx>fy) - (fx<fy);	
}

void entrada(int tam, float num[]){
  printf("informe os numeros para serem ordenados: \n");
  for(int i=0; i<tam; i++){
    scanf("%f", &num[i]);
  }
}