#include <stdio.h>

int main(){
    float temp;
    printf("Digite a temperatura: ");
    scanf("%f",&temp);
    if(temp<20)
        printf("Está frio!!!\n");
    else if(temp<30)
        printf("Está agradável!!!\n");
    else
        printf("Está quente!!!\n");
}
//