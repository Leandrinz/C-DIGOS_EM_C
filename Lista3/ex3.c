#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i;
    for (int c = 0; c <=10; c++){
        printf("Digite sua idade\n");
        scanf("%d", &i);
        if (i>=18){
            printf("Voc� � maior de idade\n");
        }
        else{
            printf("Voc� � menor de idade\n");
        }
    }
    return 0;
}