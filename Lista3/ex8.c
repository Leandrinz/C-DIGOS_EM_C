#include <stdio.h>

int main(){
    int x,y,cd,d;
    printf("Digite o valor de x e y\n");
    scanf("%d %d", &x, &y);
    if (x > y && x >0 && y >0){
        printf("Intervalo invalido");
    }
    else{
    for (int i=x;i<=y;i++){
        cd = 0;
        d = 1;
        // ver numeros primos//
        while(d <= i){
            if (i%d == 0){
                cd = cd +1;
            }
            d++;
        }
        if (cd ==2){
            printf("%d\n", i);
        }
    }    
    }
    

    return 0;
}