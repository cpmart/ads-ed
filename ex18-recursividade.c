#include <stdio.h>

long fatorial(int n);
int main()
{
    int n;
    long fat;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    fat = fatorial(n);
    printf("Fatorial : %ld\n", fat);
}

long fatorial(int n){
    if(n==0)
        return 1;
    else
        return n*fatorial(n-1);
}