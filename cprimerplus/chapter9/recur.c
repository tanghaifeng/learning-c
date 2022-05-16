#include <stdio.h>
// 函数原型等信息放在头文件中
#include "recur.h"
// void up_and_down(int);

int main()
{
    up_and_down(1);
    return 0;
}

// 递归函数
void up_and_down(int n)
{
    printf("%d", TESTHEADFILE);
    printf("Level %d: n localtion %p \n", n ,&n);
    if (n < 4)
    {
        up_and_down(n + 1);
    }
     printf("Level %d: n localtion %p \n", n ,&n);
}
