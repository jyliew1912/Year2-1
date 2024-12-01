#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    double area = (x + y) * z / 2.0;
    printf("Trapezoid area:%.1lf\n", area);
}