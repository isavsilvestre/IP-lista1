#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n<=2 || n>=12)
    {
        printf("Combinacao impossivel\n");
    }
    if (n==3)
    {
        printf("D1: 1, D2: 2\nD1: 2, D2: 1\nHa 2 possibilidades\n");
    }
    if (n==4)
    {
        printf("D1: 1, D2: 3\nD1: 3, D2: 1\nHa 2 possibilidades\n");
    }
     if (n==5)
    {
        printf("D1: 1, D2: 4\nD1: 2, D2: 3\nD1: 3, D2: 2\nD1: 4, D2: 1\nHa 4 possibilidades\n");
    }
     if (n==6)
    {
        printf("D1: 1, D2: 5\nD1: 2, D2: 4\nD1: 4, D2: 2\nD1: 5, D2: 1\nHa 4 possibilidades\n");
    }
     if (n==7)
    {
        printf("D1: 1, D2: 6\nD1: 2, D2: 5\nD1: 3, D2: 4\nD1: 4, D2: 3\nD1: 5, D2: 2\nD1: 6, D2: 1\nHa 6 possibilidades\n");
    }
    if (n==8)
    {
        printf("D1: 2, D2: 6\nD1: 3, D2: 5\nD1: 5, D2: 3\nD1: 6, D2: 2\nHa 4 possibilidades\n");
    }
    if (n==9)
    {
        printf("D1: 3, D2: 6\nD1: 4, D2: 5\nD1: 5, D2: 4\nD1: 6, D2: 3\nHa 4 possibilidades\n");
    }
    if (n==10)
    {
        printf("D1: 4, D2: 6\nD1: 6, D2: 4\nHa 2 possibilidades\n");
    }
    if (n==11)
    {
        printf("D1: 5, D2: 6\nD1: 6, D2: 5\nHa 2 possibilidades\n");
    }

    return 0;

}