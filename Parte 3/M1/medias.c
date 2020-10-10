#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, nAlunos, aprovados = 0, reprovados = 0, index;
    double alunos[60][4], n1, n2, t, media;

    printf("Insira o numero de alunos da turma: ");
    scanf("%d", &nAlunos);

    for (i = 0; i < nAlunos; i++) {
        printf("Insira as notas do aluno %d: ", (i + 1));
        scanf("%lf%lf%lf", &n1, &n2, &t);
        for (j = 0; j < 4; j++) {  
            switch (j) {
            case 0:
                alunos[i][j] = n1; 
                break;
            case 1:
                alunos[i][j] = n2;
                break;
            case 2:
                alunos[i][j] = t;
                break;
            case 3:
                alunos[i][j] = ((n1 * 4) + (n2 * 2) +  (t * 2)) / 8;
                break;
            default:
                break;
            }  
        }
    }

    printf("\n\t  N1\tN2\tT\tMedia\n");
    for (i = 0; i < nAlunos; i++) {
        printf("Aluno %d:  ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%.2lf\t", alunos[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < nAlunos; i++) {
        media = media + alunos[i][3];
        if (alunos[i][3] >= 6) {
            aprovados++;
        } else {
            reprovados++;
        }
    }
    media = media / nAlunos;

    printf("\nA media da turma eh %.2lf", media);
    printf("\n%d alunos foram aprovados e %d reprovados", aprovados, reprovados);

    printf("\n\nConsultar nota do aluno de numero: ");
    scanf("%d", &index);

    printf("\n\t  N1\tN2\tT\tMedia\n");
    printf("Aluno %d:  ", index);
    for (j = 0; j < 4; j++) {
        printf("%.2lf\t", alunos[index - 1][j]);
    }

    if (alunos[index - 1][3] > media) {
        printf("\n\nA nota do aluno %d esta acima da media da turma", index);
    } else {
        printf("\n\nA nota do aluno %d esta abaixo da media da turma", index);
    }


    return 0;
}