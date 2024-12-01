#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("%d\n", x);
}