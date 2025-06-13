#include <stdio.h>

int main(){
    float m;
    int n1, n2, n3;
    for (int c = 1; c<=10;c++){
        printf("Digite suas tres notas:\n");
        scanf("%d %d %d", &n1, &n2, &n3);
        m = (n1 + n2 + n3) / 3;
        if (m>=9){
            printf("Conceito: A\n");
        }
        else if(m>=7 && m<9){
            printf("Conceito: B\n");
        }
        else if (m>=6 && m<7){
            printf("Conceito: C\n");
        }
        else if (m>=4 && m<6){
            printf("Conceito: D\n");
        }
        else{
            printf("Conceito: E\n");
        }
    }

    return(0);
}