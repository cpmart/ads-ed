#include <stdio.h>

int main(){
    int valor, *pValor, *pValor2;
    valor = 20;
    pValor = &valor;
    pValor2 = pValor;
    printf("valor: %d\n",valor);
    printf("& pValor: %d\n",*pValor);
    printf("& pValor2: %d\n",*pValor2);

    printf("& valor: %p\n",&valor);
    printf("pValor: %p\n",pValor);    
    printf("pValor2: %p\n",pValor2);

    scanf("%d",&valor);
    printf("valor: %d\n",valor);
    scanf("%d",pValor);
    printf("valor: %d\n",valor);
    scanf("%d",&*pValor2);
    printf("valor: %d\n",valor);

}