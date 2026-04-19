#include <stdio.h>
#include <math.h>

#define sucesso 0

int main(int argc, char ** argv) {
    
    //valores
    float salario_atual, porcentagem, resultado;

    printf("Qual eh o salario atual do funcionario?\n");
    scanf("%f", &salario_atual);
    printf("Qual eh a porcentagem de aumento ao funcionario?\n", salario_atual);
    scanf("%f", &porcentagem);

    //calcula e imprime resultado
    resultado = salario_atual * (porcentagem/100 + 1);

    printf("O novo salario eh %f reais.\n", resultado);

    return sucesso;
}