#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x, y;
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        int m = (x > y) ? x : y;
        int n = (x > y) ? y : x;

        int sum = 0;
        for(int i = n; i <= m; i++)
        {
            sum += i;
        }

        printf("%d\n", sum);
    }
}