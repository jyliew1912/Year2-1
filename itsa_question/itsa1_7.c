#include <stdio.h>

void uptri()
{
    int k = 1;
    int s = 4;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < s; j++)printf(" ");
        for(int m = 0; m < k; m++)printf("*");
        k += 2;
        s--;
        printf("\n");
    }
}

void downtri()
{
    int k = 9;
    int s = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < s; j++) printf(" ");
        for(int m = 0; m < k; m++) printf("*");
        k -=2;
        s++;
        printf("\n");
    }
}

void empty()
{
    int k = 1;
    int s = 4;
    for(int i = 1; i < 5; i++)
    {
        for(int j = 0; j < s; j++)printf(" ");
        for(int m = 0; m < k; m++)
        {
            if(m == 0 || m == k - 1) printf("*");
            else printf(" ");
        }
        k += 2;
        s--;
        printf("\n");
    }
    for(int m = 0; m < k; m++)printf("*");
    printf("\n");
}

int main()
{
    int input;
    scanf("%d", &input);
    switch(input)
    {
        case 1:
            empty();
            break;
        case 2:
            uptri();
            break;
        default:
            downtri();
            break;
    }
}