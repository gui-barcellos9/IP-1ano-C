#include <stdio.h>
#include <math.h>
#define sucesso 0

int main(int argc, char ** argv) {
    
    // define os valores
    int valor1, valor2, valor3, valor4, valor5, soma;

    printf("Insira 5 numeros inteiros separados por dois pontos (;) e espaco para a soma.\n");
    scanf("%d; %d; %d; %d; %d", &valor1, &valor2, &valor3, &valor4, &valor5);
    
    // calcula e imprime resultado
    soma = valor1 + valor2 + valor3 + valor4 + valor5;
    printf("%d + %d + %d + %d + %d = %d\n", valor1, valor2, valor3, valor4, valor5, soma);

    return sucesso;
}