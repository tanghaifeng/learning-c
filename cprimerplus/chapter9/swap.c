#include <stdio.h>

void swap_p(int * i, int * j);

int main()
{
    int i = 3;
    int j = 9;
    swap_p(&i, &j);

    printf("%d, %d", i , j);
    return 0;
}

// 利用指针来交换数字
void swap_p(int * i, int * j)
{
    int temp;
    temp =  *i;
    *i = *j;
    *j = temp;
}