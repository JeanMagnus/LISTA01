#include <stdio.h>

int main(int argc, char const *argv[])
{


    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;   //válido, recebe 2.2

    scanf("%f", &aloha);  //válido, o conteúdo vai para aloha[0]

    //aloha = "value"; inválido, aloha é um ponteiro

    printf("%f", aloha); //válido, retorna aloha[0]

    coisas[4][4] = aloha[3];  //válido

    //coisas[5] = *aloha;  inválido, não se pode utilizar essa atribuição por ser uma matriz 

    //pf = value;  inválido, pf é um ponteiro

    pf = aloha;  //válido, aloha é um vetor e repassa seu endereço nessa atribuição
    
    return 0;
}