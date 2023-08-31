#include <stdio.h>
#define N 15

void funcaoEx1();
void funcaoEx2();
void funcaoEx3();
void funcaoEx4();

int main(){
    funcaoEx1();
    funcaoEx2();
    funcaoEx3();
    funcaoEx4();
}

void funcaoEx1(){
    int i, j;
    printf("-------- Ex1 ---------\n");
    for (i = 1; i <= N; i++){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
void funcaoEx2(){
    int i, j;
    printf("-------- Ex2 ---------\n");
    for (i = N; i >= 1; i--){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for (i = 2; i <= N; i++){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
void funcaoEx3(){
    int i, j;
    printf("-------- Ex3 ---------\n");
    for (i = 1; i <= N; i++){
        printf("*");
        if(i>1 && i<N){
            for(j=1;j<N-1;j++)
                printf(" ");
        }
        else{
            for(j=1;j<N-1;j++)
                printf("*");
            
        }
        printf("*");
        printf("\n");
    }
}
void funcaoEx4(){
    int i, j;
    printf("-------- Ex4 ---------\n");
    for (i = 1; i <= N; i++){
        for(j=1;j<=N-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}