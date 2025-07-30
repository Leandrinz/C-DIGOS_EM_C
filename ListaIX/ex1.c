#include <stdio.h>

int main(){
    int vet[8];
    for (int i=0;i<8;i++){
        printf("Digite um numero:\n");
        scanf("%d", &vet[i]);
    }
    for (int i = 7;i>=0;i--){
        printf("%d",vet[i]);
    }

    return 0;
}