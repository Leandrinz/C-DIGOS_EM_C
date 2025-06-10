#include <stdio.h>

int main(){
    int n,n1,n2;
    float r;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite [1] para somar\n");
    printf("Digite [2] para subtrair\n");
    printf("Digite [3] para multiplicar\n");
    printf("Digite [4] para dividir\n");
    printf("Digite [5] para sair\n");
    printf("Digite a operacao desejada:\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        r = n1 + n2;
        break;
    case 2:
        r = n1 - n2;
    case 3:
        r = n1 * n2;
    case 4:
     if (n2 ==0){
            printf("Divisao por zero nao e permitida.\n");
        }
    else{
        r = n1 / n2;}
    case 5:
        printf("Saindo do programa...\n");

        break;
    default:
        break;
    }
      printf("O resultado e: %.2f\n", r);
      return 0;
}