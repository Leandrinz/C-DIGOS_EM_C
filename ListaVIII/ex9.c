#include <stdio.h>

int media(int n1,int n2, int n3);
void letra(int m);

int main(){
    int nt1,nt2,nt3,m=0,c;
    printf("Digite suas 3 notas:\n");
    scanf("%d %d %d",&nt1,&nt2,&nt3);
    m = media(nt1,nt2,nt3);
    printf("Sua media foi %d:\n", m);
    letra(m);
    return 0;
}
int media(int n1, int n2, int n3){
    return((n1+n2+n3)/3);
}
void letra(int m){
    if (m >=9){
        printf("A");
    }
    else if(m >= 7 && m<9){
        printf("B");
    }
    else if(m>=6 && m<7){
        printf("C");
    }
    else if(m>=4 && m<6){
        printf("D");
    }
    else{
        printf("E");
    }
}