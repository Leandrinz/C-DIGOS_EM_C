#include <stdio.h>

int main()
{
    int mav, mev, v[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor:\n");
        scanf("%d", &v[i]);
        if (i == 0)
        {
            mev = mav = v[i];
        }
        if (v[i > mav])
        {
            mav = v[i];
        }
        if (v[i] < mev)
        {
            mev = v[i];
        }
    }
    printf("Maior valor:%d\n", mav);
    printf("Menor valor: %d", mev);
    return 0;
}