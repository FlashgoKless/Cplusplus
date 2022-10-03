#include <iostream>

int main(void)
{
    int a[10][10];
    int m, n;

    printf("M: ");
    scanf("%i", &m);
    printf("N: ");
    scanf("%i", &n);



    int i, j;
    for (i = 0; i < m; ++i) {
        printf("%i : \n", i + 1);
        for (j = 0; j < n; ++j) {
            printf("%i : ", j + 1);
            scanf("%i", &a[i][j]);
        }
    }

    int column, num;
    for (j = n - 1; j >= 0; --j) {
        num = 0;
        for (i = 0; i < m; ++i)
            if (a[i][j] < 0) num++;
        if (num == m) {
            column = j;
            break;
        }

    }


    --n;
    for (j = column; j < n; ++j)
        for (i = 0; i < m; ++i)
            a[i][j] = a[i][j + 1];


    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) printf(" : %i", a[i][j]);
        printf(" : \n");
    }
    return 0;
}