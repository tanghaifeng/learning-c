#include <stdio.h>

// * 间接运算符 & 取地址
int main()
{
    int p = 24;
    printf("%d,%p \n", p , &p);
    
    int * pp = &p;

    printf("%p \n", pp);
    printf("%d \n", *pp);
    return 0;
}