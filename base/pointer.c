#include <stdio.h>

// 指针也就是内存地址，指针变量是用来存放内存地址的变量
int main()
{
    int age = 10;
    int *p;

    p= &age;

    printf("%p\n", &age);
    printf("%p\n",p);
    printf("%d\n",*p);

    int *ptr = NULL;
    printf("%p\n", ptr);
    return 0;
}