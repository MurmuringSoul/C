#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n = 10;
    double a[10], sum = 0;

    // заполнение

    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%10+1;
        printf("%3.0lf", a[i]);

    }

    for(int i = 0; i < n; i++)
    {
        sum += pow(-1, i+2) * a[i];
    }

    printf("\nsum = %0.0lf", sum);

    return 0;
}
