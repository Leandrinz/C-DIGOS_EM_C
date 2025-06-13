#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    for (int i = 500; i > 0; i--)
    {
        if (i>0){
            printf("%d\n", i);
            printf("Vásco");
        }
    }
    

    return 0;
}