#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    double price = x * 0.9;

    if(x >= 800 && x < 1500) price *= 0.9;
    else if(x >= 1500) price *= 0.79;

    printf("%.1lf", price);
}