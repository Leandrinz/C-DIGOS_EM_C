#include<stdio.h>


int main(){
  
    int a, b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    if (a>b){
        printf("%d e maior que %d", a, b);
    }
    else if (a==b){
        printf("%d e %d sao iguais ", a,b);
    }
    else {
        printf("%d e maior que %d", b,a);
    }
    return 0;
}
