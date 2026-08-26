#include <stdio.h>

int main()
{
    int n, x, y;
    int k = 0;

    scanf("%d", &n);

    if(n<=2 || n>=12)
    {
        printf("Combinacao impossivel\n");
    }
    else
    {
        for (x = 1; x <= 6; x++)
        {
            for (y = 1; y <= 6; y++)
            {
                if (x + y == n && x != y)
                {
                    printf("D1: %d, D2: %d\n", x, y);
                    k++;
                }
            }
        }
        printf("Ha %d possibilidades\n", k);
    }

    return 0;
}