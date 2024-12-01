#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int binary[8];
    for(int i = 0; i < 8; i++)
    {
        binary[i] = 0;
    }

    int c = (n > 0) ? n : 0 - n;
    int k = 0;
    while(c > 0)
    {
        binary[k] = c % 2;
        c /= 2;
        k++;
    }
    
    for(int i = 0; i < 8 - k; i++)
    {
        if(n < 0)printf("1");
        else printf("0");
    }
    for(int i = k - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    
    printf("\n");
}