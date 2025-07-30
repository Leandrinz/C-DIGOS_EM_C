#include <stdio.h>

int main(){
    int n, r;
    printf("Digite o numero:\n");
    scanf("%d",&n);
    for(int i = 1; i<=10;i++){
        r= n * i;
        printf("%d x %d = %d\n", n, i, r);
    }

    return 0;
}