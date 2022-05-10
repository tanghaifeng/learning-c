#include <stdio.h>

/* 函数声明  函数声明名称不是必须的，但类型是必须的*/
int max(int, int);

int main()
{
    int maxnum = max(5,7);
    printf("%d", maxnum);
}

int max(int x, int y)
{
    return x > y ? x : y;

}