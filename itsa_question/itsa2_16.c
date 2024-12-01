#include <stdio.h>

int main()
{
    int h1, h2, m1, m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    if(h2 == 0) h2 = 24;
    int time1 = h1 * 60 + m1;
    int time2 = h2 * 60 + m2;

    int betw = time2 - time1;
    betw = betw / 30.0;

    int price = 0;
    if(betw <= 4)
    {
        price = betw * 30;
    }
    else if(betw <= 8)
    {
        price = 4 * 30 + (betw - 4) * 40;
    }
    else
    {
        price = 4 * 30 + 4 * 40 + (betw - 8) * 60;
    }

    printf("%d\n", price);
}