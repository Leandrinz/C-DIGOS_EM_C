#include <stdio.h>

void idz(int n1);

int main(){
    int a;
    printf("Digite um valor:\n");
    scanf("%d",&a);
    idz(a);
    return 0;
}
void idz(int n1){
    if (n1!=0){
        printf("%d:Diferente de zero", n1);
    }
    else{
        printf("%d: Igual a zero", n1);
    }
}