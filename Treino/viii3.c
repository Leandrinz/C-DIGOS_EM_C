#include <stdio.h>
 
void paim(int n1);

int main(){
    int a;
    printf("Digite um numero para verificar se e par ou impar: ");
    scanf("%d", &a);
    paim(a);
    return 0;
}
void paim(int n1){
    if (n1%2==0){
        printf("O numero e par!");
    }
    else{
        printf(" O numero e impar!");
    }

}