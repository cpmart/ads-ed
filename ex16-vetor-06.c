#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 

int main(){
    int tamanho;
    printf("Informe o tamanho: ");
    scanf("%d",&tamanho);
    int vet[tamanho];
    srand(time(NULL));
    for(int i=0; i<tamanho; i++){
        vet[i]=rand()%51;
        printf("%d\n",vet[i]);
    }
}