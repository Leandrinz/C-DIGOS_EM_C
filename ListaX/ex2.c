#include <stdio.h>

int main(){
    int a[2][3], b[2][3],s[2][3],l,c;
    for (l=0; l<2;l++){
        for (c=0;c<3;c++){
            printf("Digite o valor do a[%d][%d]",l,c);
            scanf("%d", &a[l][c]);
        }
    }
    for (l=0; l<2;l++){
        for (c=0;c<3;c++){
            printf("Digite o valor do a[%d][%d]",l,c);
            scanf("%d", &b[l][c]);
        }
    }
    for (l=0; l<2;l++){
        for (c=0;c<3;c++){
            s[l][c]= a[l][c] + b[l][c];
            printf("%d     ", s[l][c]);
        }
        printf("\n");
    }



    return 0;
}