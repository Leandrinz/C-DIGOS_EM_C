#include <stdio.h>

int main(){
    int v1[5], v2[5];
    for (int i=0;i<5;i++){
        printf("Digite o valor de v1[%d]",i);
        scanf("%d", &v1[i]);
        v2[i] =1;
        for (int c=1;c<=v1[i];c++){
            v2[i] = v2[i] * c;
        }
    }
    for (int i = 0;i<5;i++){
        printf("v1[%d] = %d / v2[%d] = %d\n",i, v1[i], i, v2[i]);
    }
    return 0;
}