#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int s=0;
    for (int c = 1;c<=500;c++)
    {
        s = s + c;
    }
    printf("%d", s);
    return 0;
}