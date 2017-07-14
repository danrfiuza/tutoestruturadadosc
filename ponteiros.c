/*ponteiros.c*/
#include <stdio.h>
int main(void)
{
    int *piValor;/*ponteiro para inteiro*/
    int iVariavel = 10;
    piValor = &iVariavel;/*pegando o endereço de memória da variável*/
   
    printf("Endereco: %d\n",piValor);
    printf("Valor: %d\n",*piValor);

    *piValor = 20;
    printf("Valor alterado: %d\n",iVariavel);
    printf("Endereço: %d\n",piValor);

    return 0;
}
