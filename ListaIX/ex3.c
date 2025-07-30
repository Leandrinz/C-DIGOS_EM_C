#include <stdio.h>

int main(){
    int v[5], s=0;
    for (int i =0;i<5;i++){
        printf("Digite um numero:\n");
        scanf("%d", &v[i]);
    }
    for (int i=0;i<5;i++){
        s = s + v[i];
    }
    printf("A soma dos numeros nos vetores e igual a %d", s);
    return 0;
}