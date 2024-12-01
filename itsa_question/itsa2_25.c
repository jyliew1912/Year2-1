#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    int distance_x = (x1 - x2) * (x1 - x2);
    int distance_y = (y1 - y2) * (y1 - y2);

    double distance = (double)distance_x + distance_y;
    distance = sqrt(distance);

    printf("%.2lf\n", distance);

}