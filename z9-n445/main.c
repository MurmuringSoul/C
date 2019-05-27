#include <stdio.h>

int enter_a_number()
{
    while (1)
    {
        int n;
        printf("Enter even n (n>2)\n");
        scanf("%d", &n);
        if (n > 2)
            if (n % 2 == 0)
                return n;
        printf("Incorrect 'n' \nTry again \n");

    }
}

int prime(int x)
{
    int k = 0;

    for (int i = 2; i < x; i++)
    {
        if(x % i == 0)
            k++;
    }
    if (k == 0)
        return 1;
    else
        return 0;
}

int find_sum(int x)
{
    for (int i = 0; i <= x; i ++)
    {
        if (prime(i))
        {
            for (int j = 1; j <= x; j++)
            {
                if (prime(j))
                    if (i+j == x)
                    {
                        printf("%d + %d = %d", i,j,x);
                        return 0;
                    }
            }
        }
    }

    return -1;
}

int main()
{
    int n;

    n = enter_a_number();
    find_sum(n);

    return 0;
}
