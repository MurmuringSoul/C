#include <stdio.h>

int main()
{
    int h, m, diff = 0;
    double hh, mm;

    printf("Enter h(0<h<=12):");
    scanf("%d", &h);
    printf("Enter m(0<=m<60):");
    scanf("%d", &m);

    if (m < 0)
        if (m >= 60)
            return 1;

    if (h < 0)
        if (h >= 12)
            return 1;

    hh = h;
    mm = m;

    while (360/12 * hh != 360/60 * mm)
    {
        diff++;
        mm++;
        if (mm == 60)
        {
            mm -= 60;
            hh++;
            if (hh > 12)
                hh -= 12;
        }
    }
    printf("diff = %d", diff);
    return 0;
}
