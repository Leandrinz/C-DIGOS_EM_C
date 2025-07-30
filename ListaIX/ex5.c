#include<stdio.h>

int main(){
    float a[5],b[5];
    for (int i=0;i<5;i++){
        printf("Digite o valor do indice a[%d]",i);
        scanf("%f",&a[i]);
        if (i==0){
            b[i] = a[i];
        }
        else if(i%2==0){
            b[i]= a[i] *5;
        }
        else{
            b[i]= a[i] + 5;
        }
    }
    for (int i=0;i<5;i++){
        printf("%.2f\n",a[i]);
    }
    printf("---------------------\n");
    for (int i=0;i<5;i++){
        printf("%.2f\n",b[i]);
    }

    return 0;
}