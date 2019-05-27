#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[5][5], b[5], res = 1;
    int row = 5, col = 5;

    // Заполнение матрицы
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col ; j++)
        {
            M[i][j] = rand()%10 + 1;
            printf("%3.0lf", M[i][j]);
        }
        printf("\n");
    }

    // Заполнение последовательности b
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col ; j++)
        {
            res *= M[i][j];
        }
        b[i] = res;
        res = 1;

        printf("%0.0lf\n", b[i]);
    }

}
