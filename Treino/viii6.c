#include <stdio.h>

int ac(int n1, int n2);

int main(){
    int pi=3, r,a;
    printf("Digite o valor do raio considerando pi como 3: ");
    scanf("%d", &r);
    a=ac(pi,r);
    printf("O valor da area do circulo e igual a: %d",a);
    return 0;
}
int ac(int n1, int n2){
    
    return(n1*(n2*n2));
}