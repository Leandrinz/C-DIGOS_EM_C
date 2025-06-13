#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    for (int c = 0; c <=10; c++){
        printf("Digite sua idade\n");
        scanf("%d", &i);
        if (i>=18){
            printf("Você é maior de idade\n");
        }
        else{
            printf("Você é menor de idade\n");
        }
    }
    return 0;
}