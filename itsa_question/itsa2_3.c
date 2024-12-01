#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    double w;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &w);
        double area = w * w;

        area = round(area * 10) / 10.0;

        printf("%.1lf\n", area);
    }

    return 0;
}
