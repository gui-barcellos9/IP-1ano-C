#include <stdio.h>
#include <math.h>
#define sucesso 0

int main(int argc, char ** argv) {
    
    // define os valores
    float valor1, v2, v3, v4, v5, v6, calculo;

    printf("Insira 6 numeros inteiros separados por dois pontos (;) e espaco para o cálculo.\n");
    scanf("%f; %f; %f; %f; %f; %f", &valor1, &v2, &v3, &v4, &v5, &v6);
    
    // calcula e imprime resultado
    calculo = (valor1 + v2 + v3 + v4 + v5 + v6) / 6;
    printf("(%f + %f + %f + %f + %f + %f) / 6 = %f\n", valor1, v2, v3, v4, v5, v6, calculo);

    return sucesso;
}