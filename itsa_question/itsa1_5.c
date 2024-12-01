#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int power = 10000;
    float ans;
    for(int i = 0; i < 5; i++)
    {
        ans = input;
        ans /= power;
        for(int j = 0; j < (int)ans; j++)
        {
            printf("*");
        }
        printf("\n");
        input %= power;
        power /= 10;
    }
}