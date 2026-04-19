#include <stdio.h>
#include <math.h>
#define sucesso 0

int main(int argc, char ** argv) {
    
    // define os valores
    float numerador, denominador, quociente;
    
    printf("Qual o valor do numerador?\n");
    scanf("%f", &numerador);
    printf("Qual o valor do denominador?\n");
    scanf("%f", &denominador);
    
    // calcula
    quociente = numerador / denominador;

    // imprime
    printf("%f / %f = %f.\n", numerador, denominador, quociente);

    return sucesso;
}