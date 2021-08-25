#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, D, x1, x2;
    printf("Enter quadratic coefficients: a, b, c\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    D=b*b-4*a*c;
    if (D<0)
        printf("No roots\n");
    else
    {
        if (D==0)
        {
            x1=(b*(-1)+sqrt(D))/(2*a);
            printf("One root: x=%lf\n", x1);
        }
        else
        {
            x1=(b*(-1)-sqrt(D))/(2*a);
            x2=(b*(-1)+sqrt(D))/(2*a);
            printf("Two roots: x1=%lf, x2=%lf\n", x1, x2);
        }
    }
    return 0;
}
