#include <stdio.h>

int main()
{
    int n, i;
    double S;

    scanf("%d", &n);

    if (n<=1)
    {
        printf("Numero invalido!\n");
    }
    else
    {
       S = 0;
       for (i = 1; i<=n; i++)
       {
        S += 1.0/i;
       }
       printf("%.6lf\n", S);
    }

    return 0;
}