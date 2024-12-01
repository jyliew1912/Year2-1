#include <stdio.h>
#include <math.h>

int main() 
{
    int w, h;
    scanf("%d %d", &w, &h);

    double height = (double)h / 100;

    double BMI = w / (height * height);
    BMI = round(BMI * 100) / 100.0;

    printf("%.2lf\n", BMI);

    return 0;
}
