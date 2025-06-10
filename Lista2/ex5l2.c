#include <stdio.h>

int main(){
    int c,q;
    float tp;
    printf("-------------------------------------------------------------\n");
    printf("             Bem-vindo ao sistema de vendas!\n");
    printf("-------------------------------------------------------------\n");
    printf("Codigo do item  |   Especificacao   |    Preco unitario\n");
    printf("     100        |   Cachorro Quente |      R$ 10.00\n");
    printf("     101        |       Bauru       |      R$ 12.00\n");
    printf("     102        |      X-Salada     |      R$ 15.00\n");
    printf("     103        |     Hamburguer    |      R$ 18.00\n");
    printf("     104        | Refrigerante(lata)|      R$ 5.00\n");
    printf("-------------------------------------------------------------\n");
    printf("Digite o codigo do item desejado:\n");
    scanf("%d", &c);
    printf("Digite a quantidade desejada:\n");
    scanf("%d", &q);
    switch (c)
    {
    case 100:
        tp = q * 10.00;

        break;
    case 101:
        tp = q * 12.00;

        break;
    case 102:
        tp = q * 15.00;

        break;
    case 103:
        tp = q * 18.00;
        break;
    case 104:
        tp = q * 5.00;
        break;  
    default:
        break;
    }
    printf("O total a pagar e: R$ %.2f\n", tp);
    printf("-------------------------------------------------------------\n");
    return 0;




}