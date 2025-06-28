#include <stdio.h>

void ida(int n1);
int main(){
    int id;
    printf("Digite sua idade:\n");
    scanf("%d", &id);
    ida(id);
    return 0;
}
void ida(int n1){
    if (n1 >=18){
        printf("Voce e maior de idade");
    }
    else{
        printf("Voce e menor de idade");
    }
}