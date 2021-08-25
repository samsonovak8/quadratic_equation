#include <stdio.h>
#include <stdlib.h>

int check_data(int a, int b, int c)
{
    if ((a == 0) && (b == 0) && (c != 0))
        return 0;
    double d = b * b - 4 * a * c;
    if (d < 0)
        return 0;
    return 1;
}
int main()
{
    double a = 0, b = 0, c = 0;
    printf("Enter quadratic coefficients: a, b, c\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (!check_data(a, b, c))
        printf("No roots\n");
    else
    {
        double D = b * b - 4 * a * c;
        double x1 = (b * (-1) - sqrt(D))/(2 * a);
        double x2 = (b * (-1) + sqrt(D))/(2 * a);
        if (x1 == x2)
            printf("One root: x = %lf", x1);
        else 
            printf("Two roots: x1 = %lf, x2 = %lf", x1, x2);
    }
    return 0;
}
