#include <stdio.h>

void mid(int n1);

int main(){
    int i;
    printf("Digite sua idade: ");
    scanf("%d",&i);
    mid(i);
    return 0;
}
void mid (int n1){
    if (n1>=18){
        printf("Voce e maior de idade!");
    }
    else{
        printf("Voce e menor de idade");
    }
}
