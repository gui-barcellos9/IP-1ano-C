#include <stdio.h>
#define sucesso 0

int main(int argc, char ** argv) {
    
    // define os valores das notas das provas dos alunos
    double a1p1, a1p2, a1p3, \  
           a2p1, a2p2, a2p3, \  
           a3p1, a3p2, a3p3;    //alunoXprovaY = aXpY
    
    printf("Qual eh as notas das 3 provas do aluno 1? Separe por ; e espaco.\n");
    scanf("%f; %f; %f", &a1p1, &a1p2, &a1p3);
    printf("Qual eh as notas das 3 provas do aluno 2? Separe por ; e espaco.\n");
    scanf("%f; %f; %f", &a2p1, &a2p2, &a2p3);
    printf("Qual eh as notas das 3 provas do aluno 3? Separe por ; e espaco.\n");
    scanf("%f; %f; %f", &a3p1, &a3p2, &a3p3);
    
    // imprime a tabela
    printf("ALUNO\tPROVA 1\tPROVA 2\tPROVA 3\n"\
           "1\t%.2f\t%.2f\t%.2f\n"\
           "2\t%.2f\t%.2f\t%.2f\n"\
           "3\t%.2f\t%.2f\t%.2f\n",
           a1p1, a1p2, a1p3, a2p1, a2p2, a2p3, a3p1, a3p2, a3p3
    );

    return sucesso;
}