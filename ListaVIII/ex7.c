#include <stdio.h>

float volume(float n1, float n2, float n3);

int main(){
    float v,c,a,l;
    printf("Digite o comprimento, largura e altura:\n");
    scanf("%f %f %f", &c, &l,&a);
    v= volume(c,a,l);
    printf("O volume foi %.2f",v);
    return 0;
}
float volume(float n1, float n2, float n3){
    return(n1*n2*n3);
}