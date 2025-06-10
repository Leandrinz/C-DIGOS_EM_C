#include <stdio.h>

int main(){
    int n, d;
    printf("Digite o numerador:\n");
    scanf("%d", &n);
    printf("Digite o denominador:\n");
    scanf("%d", &d);
    if (n%d == 0){
        printf("E divisivel.\n");
    }
    else{
        printf("Nao e divisivel.\n");
    }
    return 0;

}