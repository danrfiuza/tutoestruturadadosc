/*programa_vetores.c*/
#include <stdio.h>
#define TAMANHO 5

int main(void)
{
    int iIndice;
    int iValorA;
    int iSoma;
    int aVetor[TAMANHO];
    float fMedia;

    for(iIndice=0;iIndice < TAMANHO;iIndice++){
        printf("%d\n\r",&iValorA);
        scanf("%d",&iValorA);
        aVetor[iIndice] = iValorA;
    }

    iSoma = 0;
    for(iIndice=0;iIndice < TAMANHO;iIndice++){
        iSoma += aVetor[iIndice];
    }

    fMedia = (float)iSoma/TAMANHO;
    printf("Media: %f\n\r",fMedia);
    return 0;
}
