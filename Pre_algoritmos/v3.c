#include <stdio.h>

int main(){
    char mat[3][3];
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i==j){
                mat[i][j] = '1';
            }
            else{
                mat[i][j] = '0';
            }
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
        printf("%c       ", mat[i][j]);
        }
        printf("\n");
    }
return 0;
}