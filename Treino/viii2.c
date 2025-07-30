#include <stdio.h>

void pnn(int n1);
int main(){
    int a;
    printf("Digite um numero para ver se e positivo, negativo ou neutro: ");
    scanf("%d",&a);
    pnn(a);

    return 0;
}
void pnn(int n1){
    if (n1>0){
        printf("O numero e positivo!");
    }
    else if (n1==0){
        printf("O numero e neutro");
    }
    else{
        printf("O numero e negativo");
    }
}