#include<stdio.h>

// 重定向输入 < 操作 为重定向 ./a.out < ./b.txt
// 重定向输出 > ./a.out > ./b.txt
int main()
{
    char ch;
    // EOF 操作系统Ctrl + D (mac os)
    while ((ch = getchar()) != EOF)
    {
       putchar(ch);
    }
    return 0;
}z