#include <stdio.h>

int main(){
    float c,f;
    printf("Digite a temperatura em celsius:");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("A temperatura em fahrenheit é: %.2f\n", f);
    return (0);

}
