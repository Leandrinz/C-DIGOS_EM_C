#include <stdio.h>

void paim(int n1);

int main(){
    int n;
    printf("Digite um numero:\n");
    scanf("%d",&n);
    paim(n);
    return 0;
}
void paim(int n1){
    if (n1%2==0){
        printf("O numero e par!");
    }
    else{
        printf("O numero e impar");
    }
}