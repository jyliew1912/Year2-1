#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int power = 10;
    float ans;
    for(int i = 0; i < 4; i++)
    {
        ans = input % power;
        ans /= (power / 10);

        printf("%d", (int)ans);
        if(i != 3)printf(",");
        else printf("\n");

        power *= 10;
    }
}