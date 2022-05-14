#include <stdio.h>

void promotion(int);
void demotion(int);

int main()
{
    // typedef 建立类型别名
    typedef int a;
    a b = 0;
    printf("%zd .\n", sizeof(a));

    // 自动类型转换, 类型升级通常不会有问题，但是降级 较低类型可能会放不下整个数字
    promotion('t');
    short c = 2;
    promotion(c);

    long d = 2;
    demotion(d);

    // cast 强制类型转换
    double e = 2.01;
    printf("%d",(int)e);
    return 0;
}

void promotion(int size)
{
    printf("%zd .\n", sizeof size);

}

void demotion(int size)
{
    printf("%zd .\n", sizeof size);

}