#include <stdio.h>

int main(){
    float n;
    printf("Digite sua nota:\n");
    scanf("%f", &n);
    if (n>=7){
        printf("Voce foi aprovado!!!");
    }
    else if(n>= 5 && n<7){
        printf("Voce esta na recuperacao");
    }
    else{
        printf("Voce foi reprovado");
    }
    return 0;
}