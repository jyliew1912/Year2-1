#include <stdio.h>

int main()
{
    int day = 24 * 60 * 60;
    int hour = 60 * 60;
    int minute = 60;

    int input;
    scanf("%d", &input);

    int out = input / day;

    printf("%d days\n", out);
    input -= (out * day);

    out = input / hour;
    printf("%d hours\n", out);
    input -= (out * hour);

    out = input / minute;
    printf("%d minutes\n", out);
    input -= (out * minute);

    printf("%d seconds\n", input);
}