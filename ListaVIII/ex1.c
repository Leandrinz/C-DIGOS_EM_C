#include <stdio.h>

void vasco(int n1);

int main(){
    int n;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    vasco(n);
    return 0;
}

void vasco(int n){
    if(n!=0){
        printf("Diferente de zero");
    }
    else{
        printf("Zero");
    }
}
