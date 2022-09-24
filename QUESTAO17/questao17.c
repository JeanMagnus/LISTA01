#include <stdio.h>


void soma_de_vetores (int *a1,int *a2,int *aSoma,int t)
{
    for (int i=0;i<t;i++)// armazenando a soma dos elementos dos dois vetores
    {
        aSoma[i] = a1[i] + a2[i];
    }

    printf("\n vetor da soma = ");
    for(int j=0;j<t;j++)// print dos elementos somados
    {
        printf("%i, ",aSoma[j]);
    }

    printf("\n");
}

int main()
{
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%i",&tamanho);

    int a1[tamanho];
    int a2[tamanho];
    int aSoma[tamanho];
    
    printf("Digite os elementos dos arrays: \n");

    for(int i=0;i<tamanho;i++)
    {
        printf("elemento %d do array 1 = ",i);
        scanf("%i",&a1[i]);
        printf("elemento %d do array 2 = ",i);
        scanf("%i",&a2[i]);
    }

    printf(" array1 = ");
    for(int j1=0;j1<tamanho;j1++)
    {
        printf("%i, ",a1[j1]);
    }
    printf("\n");
    printf(" array2 = ");
    for(int j2=0;j2<tamanho;j2++)
    {
        printf("%i, ",a2[j2]);
    }
    
    printf("\n");
    soma_de_vetores(&a1,&a2,&aSoma,tamanho);

    return 0;
}