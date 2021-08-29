//------------------------------------------------
//! Solves a square equation ax^2 + bx + c = 0
//!
//! @param [in] a a-coefficient
//! @param [in] b b-coefficient
//! @param [in] c c-coefficient
//! @param [out] x1 Pointer to the 1st root
//! @param [out] x2 Pointer to the 2nd root
//!
//! @return Number of roots
//!
//! @note In case of infinite number of roots,
//! returns digit '3'.
//------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>


double find_diskriminant(double a, double b, double c)
{
    double d = b * b - 4 * a * c;
    return d;
}
int solveEquation(double a, double b, double c, double* x1, double* x2)
{
    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);

    if (a == 0)
    {
        if (b == 0)
        {
            return (c == 0) ? 3:0;
        }
        else
        {
            *x1 = (- c)/ b;
            return 1;
        }
    }
    else
    {
        double D = find_diskriminant(a, b, c);
        if (D < 0)
            return 0;
        if (D == 0)
        {
            *x1 = *x2 = (- b)/(2 * a);
            return 1;
        }
        else
        {
            *x1 = (- b - sqrt(D))/(2 * a);
            *x2 = (- b + sqrt(D))/(2 * a);
            return 2;
        }
    }
}
void answer_out(int number_roots, double x1, double x2)
{
    switch (number_roots)
    {
    case 0: printf("No roots\n");
            break;
    case 1: printf("One root: x1 = %lf", x1);
            break;
    case 2: printf("Two roots: x1 = %lf, x2 = %lf", x1, x2);
            break;
    case 3: printf("Any number\n");
            break;
    default: printf("main(): EROOR number_roots = %d", number_roots);
            return 1;
    }
}
int main()
{
    double a = 0, b = 0, c = 0;
    printf("Enter quadratic coefficients: a, b, c\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    double x1 = 0, x2 = 0;
    int number_roots = solveEquation(a, b, c, &x1, &x2);
    answer_out(number_roots, x1, x2);
    return 0;
}
