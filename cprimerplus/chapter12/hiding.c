#include <stdio.h>

int main()
{
    // 自动变量
    int x = 30;
    printf("x in outer block: %d at %p .\n", x , &x);

    {
        int x = 77;
        printf("x in inner block: %d at %p .\n", x , &x);
    }

    printf("x in outer block: %d at %p .\n", x , &x);

    // hiding.c:17:18: error: address of register variable requested
    // register int r = 20;  寄存器变量是存在寄存器中 而非内存中，所以无法获取寄存器的变量地址。
    // printf("%p", &r);
    return 0;
}