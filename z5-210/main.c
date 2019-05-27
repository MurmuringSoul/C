#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int n = 20;
    int j[20], k = 0;
    double a[20];

    for (int i = 0; i < n; ++i)
    {
        a[i] = rand()/1000.0;
        printf("a[%d] = %0.3lf\n", i, a[i]);
    }

    for (int i = 1; i < n-1; ++i)
    {
        if (a[i] > a[i-1])
            if (a[i] > a[i+1])
            {
                j[k] = i;
                printf("j = %d\n",j[k]);
                k++;
            }
    }


    return 0;
}
