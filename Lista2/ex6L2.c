#include <stdio.h>

int main(){
    float a1, a2, a3, mp, mf, af;
    printf("Informe suas 3 notas:\n");
    scanf("%f %f %f", &a1,&a2,&a3);
    mp = (a1 + a2 + a3) / 3;
    if (mp >= 7){
        printf("Voce foi aprovado na media");}
    else if (mp >= 3.5 && mp <7){
         printf ("Digite sua nota na avaliacao final\n");
         scanf("%f", &af);
         mf = ((6 * mp) + (4 * af)) / 10;
         if (mf >= 5)
         {
            printf("Voce foi aprovado");
         }
         else{
            printf("Voce foi reprovado");
         }
         
    }
    else{
        printf("Voce foi reprovado direto");
    }
    return 0;
}