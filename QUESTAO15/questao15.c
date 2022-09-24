#include <stdio.h>
#include <stdlib.h>

void ordem(int n, float num[]);  		 
void entrada(int n, float num[]);

int main() {
  int tam;										
  float *x;										

  printf("Informe a quantidade de números: \n");			
  scanf("%d", &tam);							

  x = malloc(tam * sizeof(float));				
  
  entrada(tam, x);								
  
  printf("Ordenando: \n");
  
  ordem(tam, x);								
						
  for(int i=0; i<tam; i++){
    printf("%.2f ", x[i]);
  }

  return 0;
}


void entrada(int tam, float num[]){							
  printf("Informe os numeros para serem ordenados: \n");		
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