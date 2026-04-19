#include <stdio.h>
#define sucesso 0

int main(int argc, char ** argv) {
    
    // define os valores
    int idade;
    char primeira_letra_nome;
    
    printf("Qual eh a idade?\n");
    scanf("%d", &idade);
    printf("Qual eh a primeira letra do nome?\n");
    scanf(" %c", &primeira_letra_nome);
        
    // imprime
    printf("A idade eh %d e o nome comeca com '%c'\n", idade, primeira_letra_nome);

    return sucesso;
}