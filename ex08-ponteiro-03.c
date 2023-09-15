#include <stdio.h>

void preencherValores(int *num1, int *num2);
int main(){
    int num1, num2;
    preencherValores(&num1, &num2);
    printf("Número 1: %d\n",num1);
    printf("Número 2: %d\n",num2);
}
void preencherValores(int *num1, int *num2){
    *num1 = 10;         //com * para alterar o conteúdo apontado
    printf("Digite o número 2: ");
    scanf("%d",num2);   //sem &, pois o ponteiro tem o endereço 
}