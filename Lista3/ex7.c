#include <stdio.h>

int main(){
    int f;
    for (int i=1;i<=11;i++){
        if (i%2!=0){
            int j = i;
            f =1;
            while(j>0){
                f = f*j;
                j = j- 1;
            }
            printf("%d! = %d\n",i, f );
            
        }
    }


    return 0;
}