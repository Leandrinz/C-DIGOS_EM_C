#include <stdio.h>

int main(){
    int i;
    printf("Digite sua idade:\n");
    scanf("%d", &i);
    if (i>=18){
        printf("Voce e maior de idade!");
    }
    else {
        printf("Voce nao e maior de idade");
    }
    return 0;
}