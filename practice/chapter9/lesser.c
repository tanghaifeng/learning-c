#include <stdio.h>

int imin(int, int);
int main()
{
    int evil;
    int evil2;

    printf("Enter a pair of integers(q to quit): \n");
    while (scanf("%d %d", &evil, &evil2) == 2)
    {
        printf("min: %d \n", imin(evil, evil2));

        printf("Enter a pair of integers(q to quit): \n");
    }
    
    printf("Bye .\n");
    return 0;
}

// 比较返回小数
int imin(int n, int m)
{
    int min;

    if (n < m)
    {
        min = n;
    } else
    {
        min = m;

    }
    return min;
}