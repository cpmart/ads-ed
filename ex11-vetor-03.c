#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N];
    srand(time(NULL));
    printf("Antes\n");
    for(int i=0; i<N; i++){
        vet[i]=rand()%51;
        printf("%d\n",vet[i]);
    }
    printf("Depois\n");
    for(int i=N-1; i>=0; i--){
        printf("%d\n",vet[i]);
    }
}