#include <stdio.h>



int main(){
    float Imc, P, A;
    printf("Digite seu peso:\n");
    scanf("%f",&P);
    printf("Digite sua altura:\n");
    scanf("%f",&A );
    Imc = P/ (A*A);
    printf("Seu imc é :%.2f\n", Imc);
    return(0);


}