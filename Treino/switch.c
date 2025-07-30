#include <stdio.h>

int main(){
    
    int c,n1,n2,r=0;
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a operacao:\n");
    scanf("%d", &c);
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    if (c == 1 || c==2 || c==3 || c==4){
        switch (c)
        {
        case 1:
            r = n1 + n2;
            break;
        case 2:
            r = n1 - n2;
            break;
        case 3:
            r = n1 * n2;
            break;
        case 4:
            r = n1 / n2;
            break;
        }
    }
    else{
        printf("Digite um numero valido");
    }
    printf("%d", r);
    return 0;
}