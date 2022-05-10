#include <stdio.h>

int x;
int y;

int addTwoNum()
{
    // extern 声明局部变量
    extern int x;
    extern int y;

    x=1;
    y=2;
    return x+y;
}

int main()
{
    int r;
    
    r = addTwoNum();

    printf("%d", r);

    return 0;
}