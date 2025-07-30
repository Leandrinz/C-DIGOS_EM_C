#include <stdio.h>

int main(){
    char n[100];
    int c=1;
    printf("Digite seu nome:\n");
    gets(n);
    for (int i=0;n[i]!='\0';i++){
        c++;
    }
    printf("O numero de caracteres e %d, claro, contando com o barra zero", c);

    return 0;
}