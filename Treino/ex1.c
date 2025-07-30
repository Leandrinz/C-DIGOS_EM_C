#include<stdio.h>

int main(){
    int a;
    printf("Digite um numero:\n");
    scanf("%d", &a);
    if (a%2==0){
        printf("o numero e par");
    }
    else{
        printf("O numero e impar");
    }

    return 0;
}
