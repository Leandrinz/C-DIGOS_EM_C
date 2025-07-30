#include <stdio.h>

int main(){
    int a,b,s,sub,m,d;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    s = a + b;
    sub = a - b;
    m = a * b;
    d = a / b;
    printf("Soma:%d, subtracao:%d, multiplicacao:%d, divisao:%d", s,sub,m,d);
    return 0;


}