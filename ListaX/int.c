/*
- Variável é só uma caixinha
- Vetor é um conjunto de variáveis
- Matrizes são um conjunto de vetores
*/
#include <stdio.h>
int main(){
    int l,c;
    int mat[4][5];
    // Primeiro significa linhas e o Segundo é colunas //
    for (l=0;l<4;l++){
        for (c=0;c<5;c++){
            printf("Digite o valor das matrizes da coluna [%d], [%d]\n", l,c);
            scanf("%d", &mat[l][c]);
        }
    }
    printf("---- MATRIZ ----\n");
    for (int l=0; l<4;l++){
        for (c=0;c<5;c++){
            printf("%d",mat[l][c]);
        }
        printf("\n");
    }

    

    return 0;
}