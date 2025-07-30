#include <stdio.h>

int main(){
    char l;
    printf("Digite a letra da sua nota:");
    scanf("%c", &l);
    switch (l)
    {
    case 'A':
        printf("Excelente");
        break;
    case 'B':
        printf("Bom");
    case 'C':
        printf("Regular");
    case 'D':
        printf("Ruim");
    case 'E':
        printf("Reprovado");
    
    default:
        printf("Letra invalida");
        break;
    }

    return 0;
}