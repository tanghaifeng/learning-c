#include <stdio.h>
int main()
{
    int a;

    if (scanf("%d", &a) == 1 && a > 3)
    {
        goto b;
    }

    b: a++;

    printf("%d", a);
    
    return 0;
}