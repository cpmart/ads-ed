#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N], vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%11;
        vetB[i] = vetA[i]*2;
    }
    printf("Dobro\n");
    for(int i=N-1; i>=0; i--){
        printf("%d -> %d\n",vetA[i],vetB[i]);
    }
}