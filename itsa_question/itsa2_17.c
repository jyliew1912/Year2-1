#include <stdio.h>

int main()
{
    int h, count;
    scanf("%d %d", &h, &count);

    double c = (double)count;
    double s = 0;
    if(h <= 60)
    {
        s = c * h;
    }
    else if(h <= 120)
    {
        s = c * 60 + c * 1.33 * (h - 60);
    }
    else
    {
        s = c * 60 + c * 1.33 * 60 + c * 1.66 * (h - 120);
    }

    printf("%.1lf\n", s);
}