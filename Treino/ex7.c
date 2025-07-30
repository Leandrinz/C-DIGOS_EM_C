#include <stdio.h>

int main(){
    int e, n1,n2;
    float r;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    printf("---------------------\n");
    printf("Codigo|Operacao\n");
    printf("    1 |   +   \n");
    printf("    2 |   -   \n");
    printf("    3 |   *   \n");
    printf("    4 |   /   \n");
    printf("---------------------\n");
    printf("Digite o codigo da operacao desejada:\n");
    scanf("%d", &e);
    switch (e)
    {
    case 1 :
        r = n1 + n2;
        printf("A soma dos numeros e :%.2f ", r);
        break;
    case 2 :
        r = n1 - n2;
        printf("A subtraçao dos numeros e: %.2f", r);
        break;
    case 3:
        r = n1 * n2;
        printf("A multiplicacao dos dois numeros e igual a: %.2f", r);
        break;
    case 4:
        r = n1 / n2;
        printf("A divisao dos dois numeros e: %.2f", r);
        break;
    default:
        printf("Codigo invalido!!!");
    }
    return 0;
}
    