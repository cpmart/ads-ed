#include <stdio.h>

void preencherNumero(int *pNumero);

int main(){
    int numero;
    preencherNumero(&numero);
    printf("Valor do número: %d\n",numero);
}

void preencherNumero(int *pNumero){
    *pNumero = 20;
}