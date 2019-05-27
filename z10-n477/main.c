#include <stdio.h>

int main()
{
    FILE *f1, *f2, *h;
    //"C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\f1.txt"
    //"C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\f2.txt"
    //"C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\h.txt"

    char k;
    f1 = fopen("C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\f1.txt", "r");
    h = fopen("C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\h.txt", "w");
    while (fscanf(f1, "%c", &k) != EOF)
    {
        fprintf(h,"%c", k);
    }
    fclose(f1);
    fclose(h);

    f2 = fopen("C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\f2.txt", "r");
    f1 = fopen("C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\f1.txt", "w");
    while (fscanf(f2, "%c", &k) != EOF)
    {
        fprintf(f1,"%c", k);
    }
    fclose(f1);
    fclose(f2);

    h = fopen("C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\h.txt", "r");
    f2 = fopen("C:\\Users\\Leonid\\Desktop\\C\\z10-n477\\f2.txt", "w");
    while (fscanf(h, "%c", &k) != EOF)
    {
        fprintf(f2,"%c", k);
    }

    fclose(f2);
    fclose(h);
    printf("End.");
    return 0;
}
