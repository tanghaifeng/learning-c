#include <stdio.h>

// 指针也就是内存地址，指针变量是用来存放内存地址的变量
void arithmeticOperation(void);
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
    arithmeticOperation();
    return 0;
}

// 在执行完上述的运算之后，ptr 将指向位置 1004，因为 ptr 每增加一次，它都将指向下一个整数位置，即当前位置往后移 4 字节。这个运算会在不影响内存位置中实际值的情况下，移动指针到下一个内存位置。如果 ptr 指向一个地址为 1000 的字符，上面的运算会导致指针指向位置 1001，因为下一个字符位置是在 1001。

// 我们概括一下：

// 指针的每一次递增，它其实会指向下一个元素的存储单元。
// 指针的每一次递减，它都会指向前一个元素的存储单元。
// 指针在递增和递减时跳跃的字节数取决于指针所指向变量数据类型长度，比如 int 就是 4 个字节。

void arithmeticOperation()
{
    int var[] = {10, 100, 200};
    printf("变量首地址：%p .\n", &var);
    int i , *ptr;
    ptr = var;
    for (i=0; i < 3; i++)
    {
        printf("存储地址： %p", ptr);
        printf("存储值： %d ", *ptr);
        ptr++;
    }
}