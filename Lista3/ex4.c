#include <stdio.h>

int main(){
    int s=0;
    for (int i =10; i<=50;i++){
        if (i%2==0){
            printf("%d\n",i);
            s= s +1;
        }
    }
    printf("O total de numeros foi %d", s);
    return 0;
}