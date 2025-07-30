#include <stdio.h>

int main(){
    int v[10],m=0;
    for (int i=0;i<10;i++){
        printf("Digite um numero:\n");
        scanf("%d",&v[i]);
        if (v[i]>m){
            m = v[i];
        }
    }
    printf("O maior numero digitado foi: %d", m);
    return 0;
}