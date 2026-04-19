#include <stdio.h>
#include <math.h>
#define sucesso 0

int main(int argc, char ** argv) {
    
    // define os valores
    float numerador, denominador, quociente;
    
    printf("Qual o valor do numerador de ate 3 casas decimais?\n");
    scanf("%f", &numerador);
    printf("Qual o valor do denominador de ate 3 casas decimais?\n");
    scanf("%f", &denominador);
    
    // calcula
    quociente = numerador / denominador;

    // imprime
    printf("%.3f / %.3f = %.3f.\n", numerador, denominador, quociente);

    return sucesso;
}