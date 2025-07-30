#include <stdio.h>

int main(){
    int n1,n2,n3;
    printf("Diga o valor dos 3 lados do triangulo:\n");
    scanf("%d %d %d", &n1, &n2,&n3);
    if((n1 + n2) > n3 && (n1 + n3)> n2 && (n2 + n3 > n1)){
        if (n1==n2 && n2 == n3){
            printf("O triangulo e equilatero!");
        }
        else if (n1!=n2 && n1!=n3 && n2!=n3){
            printf("O triangulo e escaleno");
        }
        else{
            printf("o triangulo e isosceles");
        }
    }
    else{
        printf("Os lados digitados nao formam um triangulo!!!");
    }
    return 0;
}