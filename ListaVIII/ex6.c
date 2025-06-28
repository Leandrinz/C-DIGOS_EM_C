#include <stdio.h>
    float area(float n1, float n2);
int main(){
    float a, pi = 3.14, r;
    printf("Digite o valor do raio do circulo, considerando pi=3,14:\n");
    scanf("%f", &r);
    a = area(r, pi);
    printf("A area e = %.2f", a );
    return 0;
}
 float area(float n1, float n2){
    return(((n1*n1)*n2));
 }