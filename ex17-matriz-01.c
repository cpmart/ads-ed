#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 3
#define C 3

int main(){
    int matriz[L][C]={}, totalLinhas=0, vetorTotal[C]={};
    srand(time(NULL));
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            matriz[i][j]=rand()%11;
        }
    }
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            printf("\t%2d",matriz[i][j]);
            totalLinhas += matriz[i][j];
            vetorTotal[j] += matriz[i][j];
        }
        printf("\t= %3d",totalLinhas);
        printf("\n");
    }
    printf("------------------------\n");
    for(int i=0; i<C; i++){
        printf("\t%2d",vetorTotal[i]);
    }
    printf("\n\n");
}