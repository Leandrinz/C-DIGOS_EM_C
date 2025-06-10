#include <stdio.h>

int main(){
    int md;
    float pt;
    printf("Digite o total de macas compradas:\n");
    scanf("%d", &md);
    if (md < 12){
        pt = md * 1.30;}
    else{
        pt = md * 1.10;}
    printf("O total a pagar e: R$ %.2f\n", pt);
    return 0;
}