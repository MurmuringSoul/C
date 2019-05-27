#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int m = 25, n = 50;
    int f, k = 0;
    int a[25], b[50];
// Заполнение
    for (int i = 0; i < m; i++)
    {
        f = rand()%100;

        for (int j = 0; j < i; j++)
            if (f == a[j])
            {
                k++;
                break;
            }

        if (k != 0)
        {
            i--;
            k =0;
        }
        else
            a[i] = f;
    }

    for (int i = 0; i < n; i++)
    {
        f = rand()%100;

        for (int j = 0; j < i; j++)
            if (f == b[j])
            {
                k++;
                break;
            }

        if (k != 0)
        {
            i--;
            k =0;
        }
        else
            b[i] = f;
    }
// Вывод
    printf("a =\n");
    for (int i = 0; i < m; i++)
    {
        k++;
        if (k % 5 != 0)
            printf("%4i ", a[i]);
        else
            printf("%4i\n", a[i]);
    }

    printf("b =\n");
    for (int i = 0; i < n; i++)
    {
        k++;
        if (k % 10 != 0)
            printf("%4i ", b[i]);
        else
            printf("%4i\n", b[i]);
    }
// Проверка условия
    k=0;
    for (int i = 0; i < n; i++)
    {
        if(a[k] == b[i])
            k++;
    }

    if (k == 25)
        printf("\nthe sequence 'a' is INCLUDED in the sequence 'b'");
    else
        printf("\nthe sequence 'a' is NOT INCLUDED in the sequence 'b'");
    return 0;
}
