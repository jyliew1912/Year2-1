#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool ziyin(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 0;
    return 1;
}

int main()
{
    char ch;
    scanf("%c", &ch);

    ch = tolower(ch);
    if(ziyin(ch))printf("子音\n");
    else printf("母音\n");
}