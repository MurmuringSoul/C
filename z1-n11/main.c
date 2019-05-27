#include <stdio.h>
#include <math.h>

// 11е

double fact(double x)
{
    double res = 1;

    for (int i = 2; i < x; i++)
        res *= i;

    return res;
}

int main()
{
    double a, b, x, y, z;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    printf("Enter z: ");
    scanf("%lf", &z);

    a = log(fabs((y - sqrt(fabs(x))) * (x - y / (z + x * x / 4))));
    b = x - x*x/fact(3) + pow(x,5)/fact(5);
    printf("a = %lf \n", a);
    printf("b = %lf", b);

    return 0;
}
