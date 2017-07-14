/*referenciafuncoes.c*/
#include <stdio.h>

void soma(int,int,int*);
void main(void)
{
    int iValorA;
    int iValorB;
    int iResultado;

    printf("Entre com os valores:");
    soma(iValorA,iValorB,&iResultado);
    /*está sendo passado o endereço de memória da variável,
     * qualquer alteração estará sendo realizada na memória*/
    printf("Soma: %d\n",iResultado);
    return 0;
}

void soma(int piValorA,int piValorB,int *piResultado)
{
    /*O valor está sendo colocado diretamente na memória*/
    *piResultado = piValorA + piValorB;
    return;
}
