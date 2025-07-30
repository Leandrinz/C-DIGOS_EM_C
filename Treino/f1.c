#include <stdio.h>

int media(int n1, int n2, int n3);

int main(){
    int a,b,c,m;
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d",&a, &b,&c);
    m =media(a,b,c);
    printf("A media dos numeros e: %d",m);
    return 0;
}
int media(int n1, int n2, int n3){
    return((n1+n2+n3)/3);
}