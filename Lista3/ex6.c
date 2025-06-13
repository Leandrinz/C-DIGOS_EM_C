#include <stdio.h>

int main(){
    int c,f=1, r;
    printf("Digite o numero para ver seu fatorial:");
    scanf("%d", &c);
    if(c<0){
        printf("Nao existe fatorial de numero negativo");
    }
    else{
    r = c;
    while(c>0){
        f = f * c;
        c = c -1;
    }
    printf("%d! = %d",r, f);
    }
    return 0;
}