#include <stdio.h>

int main(){
    int v[10];
    for (int i=0;i<10;i++){
        printf("Digite um valor:\n ");
        scanf("%d",&v[i]);
    }
    for (int i =0;i<10;i++){
        printf("%d,",v[i]);
    }

    return 0;
}