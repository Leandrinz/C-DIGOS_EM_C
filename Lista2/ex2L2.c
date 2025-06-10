#include <stdio.h>

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n>0){
        printf("O número é positivo.\n");}
    else if (n==0){
        printf("O número é neutro.\n");}
    else{
        printf("O número é negativo.\n");}
    return (0);
}