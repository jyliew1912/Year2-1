#include <stdio.h>

char convertToChar(int n) 
{
    if (n < 10) 
    {
        return '0' + n;
    } 
    else 
    {
        return 'A' + (n - 10);
    }
}

int main() 
{
    int input;
    scanf("%d", &input);

    char hex[9] = {'0', '0', '0', '0', '0', '0', '0', '0', '\0'};
    int k = 7;

    while(input > 0) 
    {
        int remainder = input % 16;
        hex[k] = convertToChar(remainder);
        input /= 16;
        k--;
    }

    printf("%s\n", &hex[k + 1]);
    return 0;
}
