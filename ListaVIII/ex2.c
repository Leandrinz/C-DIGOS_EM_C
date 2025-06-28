#include <stdio.h>

void benfica(int n1);

int main(){
    int n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    benfica(n);

    return 0;
}
void benfica(int n1){
    if (n1>0){
        printf("Positivo");
    }
    else if (n1==0){
        printf("Neutro");
    }
    else{
        printf("Negativo");
    }
}