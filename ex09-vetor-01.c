#include <stdio.h>
#include <stdlib.h> //acessar a função srand()
#include <time.h>   //pegar o time da máquina
#define N 5

int main(){
    int vet[N], i=25;

   vet[0] = 3;
    vet[1] = 31;
    vet[2] = 35;
    vet[3] = 38;
    vet[4] = 39;
    
    scanf("%d",&vet[0]);
    scanf("%d",&vet[1]);
    scanf("%d",&vet[2]);
    scanf("%d",&vet[3]);
    scanf("%d",&vet[4]); 

    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%6;
        printf("%d\n",vet[i]);
    }
}