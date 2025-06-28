#include <stdio.h>

void m5(int n1);

int main(){
    int n;
    printf("Escreva um numero, e vejamos se e multiplo de 5: \n");
    scanf("%d", &n);
    m5(n);

    return 0;
}
void m5(int n1){
    if (n1%5==0){
        printf("O numero %d e multiplo de 5", n1);
    }
    else{
        printf("O numero %d, nao e multiplo de 5", n1);
    }
}