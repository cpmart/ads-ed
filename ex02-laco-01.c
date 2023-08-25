#include <stdio.h>

int main(){
    int numero, i;
    printf("Digite um número: ");
    scanf("%d",&numero);
    printf("---FOR---\n");
    for(i=1; i<11; i++){
        printf("%d x %d = %d\n",numero, i, numero*i);
    }
    printf("---WHILE---\n");
    i=1;
    while(i<11){
        printf("%d x %d = %d\n",numero, i, numero*i);
        i++;
    }
    printf("---DO WHILE---\n");
    i=1;
    do{
        printf("%d x %d = %d\n",numero, i, numero*i);
        i++;
    }while(i<11);
}