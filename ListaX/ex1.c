#include <stdio.h>

int main(){
    int mat[3][3];
    int l,c;
    for (l=0;l<3;l++){
        for (c=0;c<3;c++){
        printf("Digite o valor da matriz na [%d][%d]",l,c);
        scanf("%d",&mat[l][c]);
    }
    }
    for(l=2;l>=0;l--){
        for (c=2;c>=0;c--){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}