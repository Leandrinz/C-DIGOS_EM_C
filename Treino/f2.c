#include <stdio.h>

void media (int n1, int n2, int n3);

int main(){
    int a,b,c;
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &a, &b, &c);
    media(a,b,c);
    return 0;
}
void media (int n1, int n2, int n3){
    int r;
    r = (n1+n2+n3)/3;
    printf("Media aritmetica igual a:%d",r);
}