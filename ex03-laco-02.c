#include <stdio.h>

int main(){
    short numero,i;
    long fatorial=1;
    printf("---Cálculo do Fatorial---\n");
    printf("Digite o número: ");
    scanf("%hd",&numero);
    for(i=1;i<=numero;i++){
        fatorial *= i;
    }
    printf("FOR - Fatorial de %hd é: %ld\n",numero,fatorial);
    i = fatorial = 1;
    while(i<=numero){
        fatorial *= i;
        i++;
    }
    printf("WHILE - Fatorial de %hd é: %ld\n",numero,fatorial);
    i = fatorial = 1;
    do{
        fatorial *= i;
        i++;
    }while(i<=numero);
    printf("DO WHILE - Fatorial de %hd é: %ld\n",numero,fatorial);
}