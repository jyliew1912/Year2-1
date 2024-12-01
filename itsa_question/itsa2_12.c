#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int ten = x / 10;
    x -= ten * 10;

    int five = x / 5;
    x -= five * 5;

    printf("NT10=%d\n", ten);
    printf("NT5=%d\n", five);
    printf("NT1=%d\n", x);
}