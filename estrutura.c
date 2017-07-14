/*
 *estruturadados.c
 */
#include <stdio.h>

struct DADO
{
    char sNome[40];
    int iIdade;
};

int main(void)
{
    struct DADO sDados[5];
    int iIndice;
    for(iIndice=0;iIndice<5;iIndice++){
        printf("\nEntre com o Nome ->");
        scanf("%s",&sDados[iIndice].sNome);
        printf("Entre com a Idade ->");
        scanf("%d",&sDados[iIndice].iIdade);
    }

    for(iIndice=0;iIndice<5;iIndice++){
        printf("\n%s tem %d anos",sDados[iIndice].sNome,sDados[iIndice].iIdade);
    }

    return;
}
