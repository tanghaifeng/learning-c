#include <stdio.h>
#define MONTHS 12
int main()
{

    // [1] =28 指定初始化器 c99
    int days[MONTHS] = {31, [1]=28};
    int i;
    for ( i = 0; i < MONTHS; i++)
    {
        printf("%2d %d\n", i+1, days[i]);
    }

    // 根据下标赋值
    days[2] = 31;

    for ( i = 0; i < MONTHS; i++)
    {
        printf("%2d %d\n", i+1, days[i]);
    }
    return 0;
}