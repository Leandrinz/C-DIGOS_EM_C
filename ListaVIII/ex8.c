#include <stdio.h>

int fatorial(int n1);

int main(){
    int fa,n;
    printf("Digite um numero e veja o valor do seu fatorial:\n");
    scanf("%d", &n);
    fa = fatorial(n);
    return 0;
}
    int fatorial(int n1){
    int i,f=1;
    for (i=1; i<=n1; i++){
        f = f*i;
    }
    return( printf("O fatorial de %d! e igual a %d", n1,f));
    }