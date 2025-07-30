#include <stdio.h>

int main(){
    int n[5][3], md, mda[5],s=0,c;
    for (int l=0;l<5;l++){
        s =0;
        for (int c=0;c<3;c++){
            printf("Digite as tres notas do aluno[%d]\n",l+1);
            scanf("%d",&n[l][c]);
            s = s + n[l][c];
            
        }
        mda[l]= s/3;
        printf("A media do %d aluno e:%d\n", l+1,mda[l]);
    }


    return 0;
}