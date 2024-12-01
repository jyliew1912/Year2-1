#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);

    double fer = x * 1.8 + 32.0;
    fer = round(fer * 10) / 10.0;

    printf("%.1lf\n", fer);
}