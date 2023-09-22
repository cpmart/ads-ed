#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N], total=0;
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%6;
        printf("%d\n",vet[i]);
        total+=vet[i];
    }
    printf("Total: %d\n",total);
    
}