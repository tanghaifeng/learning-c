#include <stdio.h>

#define SIZE 4

void array_pointer(void);

int main()
{
    array_pointer();
    
    // [] 不填大小 编译器自动匹配数组大小
    
    int days[] = {31, 28, 31, 30, 31,30, 31, 31, 30, 31};
    int index;

    int * first = &days[0];
    int first_value = *first;
    printf("第一个值: %d, %p \n", first_value, first);

    //  int * second = first++;
    //  printf("第二个值: %d, %p \n", *second, second);

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
    {
        printf("Month %2d has %d days.\n", index+1, days[index]);
    }

    return 0;
}


/**
 * array  pointer
 */
void array_pointer(void)
{
    // 数组名是数组首元素的地址
    short datas[4];
    short * d;
    d = datas;
    printf("%p .\n", d);

    for(int i = 0; i < SIZE; i++)
    {
        // printf("第%d个地址: %p \n", i+1, &datas[i]);
        printf("第%d个地址: %p \n", i+1, d+i);
    }

}