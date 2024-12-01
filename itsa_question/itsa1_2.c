#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int power = 1000;
    float ans;
    for(int i = 0; i < 4; i++)
    {
        ans = input;
        ans /= power;
        printf("%d\n", (int)ans);

        input %= power;
        power /= 10;
    }
}