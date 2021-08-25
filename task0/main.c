#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 0, b = 0, c = 0;
    printf("Enter quadratic coefficients: a, b, c\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    double D = b * b - 4 * a * c;
    if (D < 0)
        printf("No roots\n");
    else
    {
        if (D == 0)
        {
            double x1 = (b * (-1)+sqrt(D))/(2 * a);
            printf("One root: x = %lf\n", x1);
        }
        else
        {
            double x1 = (b * (-1) - sqrt(D))/(2 * a);
            double x2 = (b * (-1) + sqrt(D))/(2 * a);
            printf("Two roots: x1 = %lf, x2 = %lf\n", x1, x2);
        }
    }
    return 0;
}
