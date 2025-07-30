#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    if (n >0){
        printf("O numero e positivo!");
    }
    else if(n==0){
        printf("O numero e neutro!");
    }
    else{
        printf("O numero e negativo!");
    }
    return 0;
}