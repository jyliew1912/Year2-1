#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int x;
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &x);

        if(x > 31) printf("Value of more than 31\n");
        else printf("%d\n", 1 << x);
    }

    return 0;
}
