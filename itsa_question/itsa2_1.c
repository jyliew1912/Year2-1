#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    double area = (x * y) / 2.0;
    printf("Triangle area:%.1f\n", area);

    return 0;
}
