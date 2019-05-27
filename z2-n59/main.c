#include <stdio.h>

int main()
{
    double x,y;
    int f = 0;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    if (x > -1)
        if (x < 1)
            if (y > -1)
                if (y < 1)
                    f = 1;
    if(f == 1)
        printf("Point inside the area");
    else
        printf("Point outside the area");

    return 0;
}
