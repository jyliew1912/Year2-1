#include <stdio.h>

int main()
{
    // time = distance / (your speed - friend's speed)
    // your speed = 100cm/s
    // friend's speed = 30*2.54cm/s

    double f_speed = 30 * 2.54;
    double b_speed = 100 - f_speed;

    int dis;
    scanf("%d", &dis);

    dis *= 100;

    double time = dis / b_speed;

    printf("%d\n", (int)time + 1);
}