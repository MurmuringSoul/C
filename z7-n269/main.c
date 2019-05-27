#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main()
{
    char *str, s;
    int n, min = -1, p = 0, f = 0;


    printf("Enter size of str\n");
    scanf("%i", &n);

    str = (char*)malloc((n + 1) * sizeof(char));

    printf("Enter str\n");

    getchar();
    fgets(str, n + 1, stdin);

    // Поиск самого короткого слова
    p = 0;
    for (int i = 0; i < n; i++)
    {
        s = str[i];
        if (s != ' ')
            p++;
        else
        {
            if (min == -1)
                min = p;

            if (min > p)
                if (p != 0)
                    min = p;

            p = 0;
        }
    }

    printf("\nLength of the shortest word = %d", min);

    free(str);
    return 0;
}
