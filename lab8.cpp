#include <iostream>

int main(void)
{
    int a[10], b[10];
    int n;

    printf("N: ");
    scanf("%i", &n);

    int k;
    for (k = 0; k < n; ++k) {
        printf("a[%i] : ", k + 1);
        scanf("%i", &a[k]);
    }

    int i = -1;
    for (k = 0; k < n; k += 2) {
        ++i;
        b[i] = a[k];
    }

    printf("B: \n size : %i\n", ++i);
    for (k = 0; k < i; ++k) printf("  %i: %i\n", k + 1, b[k]);

    return 0;
}
