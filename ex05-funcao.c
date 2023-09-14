#include <stdio.h>


//Protótipo = declaração de funções
void rotulo();
void multiplica(int num1, int num2);
  double pi();
//retorno de funções
int soma(int num1, int num2);
        //passagem de parâmetros
int main(){
    int num1, num2;
    //Chamadas das funções
    rotulo();
    printf("Digite 2 valores: ");
    scanf("%d+%d",&num1, &num2);
    multiplica(num1, num2);
    printf("PI = %.10lf\n",pi());
    printf("PI = %g\n",pi());
    printf("A soma de 3+4 = %d\n",soma(3,4));
}

//Construção das funções
void rotulo(){
    printf("Resultado da multiplicação = ");
    multiplica(4,5);
}
void multiplica(int num1, int num2){
    printf("%d\n",num1*num2);
}
double pi(){
    return 3.1415912345;
}
int soma(int num1, int num2){
    printf("teste\n");
    return num1+num2;
}