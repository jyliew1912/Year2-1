#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);

    double kilom = x * 1.6;
    kilom = round(kilom * 10) / 10.0;

    printf("km=%.1lf\n", kilom);
}