#include <stdio.h>

#define WIDTH 40

void startbar(void);
int main()
{
    startbar();
    printf("FUNCTION .\n");
    startbar();
    return 0;
}

void startbar(void)
{
    int count;
    for (count = 1; count < WIDTH; count++)
    {
        putchar('*');

    }
    putchar('\n');
}