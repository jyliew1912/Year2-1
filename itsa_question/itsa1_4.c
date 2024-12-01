#include <stdio.h>
#include <string.h>
#define MAX 20

int main() 
{
    char arr[5][2][MAX] = {
        {"dog", "狗"},
        {"cat", "貓"},
        {"duck", "鴨"},
        {"cow", "牛"},
        {"fox", "狐"}
    };

    char input[MAX];
    scanf("%s", input);

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            if (strcmp(input, arr[i][j]) == 0) 
            {
                printf("%s\n", arr[i][!j]);
                return 0;
            }
        }
    }
    return 0;
}
