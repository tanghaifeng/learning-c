#include <stdio.h>

#define SIZE 4

void array_pointer(void);

int sum(int * array, int);

int main()
{
    array_pointer();
    
    // [] 不填大小 编译器自动匹配数组大小
    
    int days[] = {31, 28, 31, 30, 31,30, 31, 31, 30, 31};
    int index;

    int * first = &days[0];
    int first_value = *first;
    printf("第一个值: %d, %p \n", first_value, first);

    // 第一个值: 31, 0x7ff7beb4f5a0 
    // 第二个值: 28, 0x7ff7beb4f5a4 
    // 指针加一相当于增加一个存储单元 int 是4个字节
     int * second = first+1;
     printf("第二个值: %d, %p \n", *second, second);
   

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
    {
        printf("Month %2d has %d days.\n", index+1, days[index]);
    }


    int total = sum(days, 10);
    printf("计算的和为: %d .\n", total);
    return 0;
}


//    array  pointer short在本系统中是2个字节 所以加一地址增加了个字节

//    第1个地址: 0x7ff7beb4f560 
//    第2个地址: 0x7ff7beb4f562 
//    第3个地址: 0x7ff7beb4f564 
//    第4个地址: 0x7ff7beb4f566 
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

// 用指针传递参数 (函数原型 int sum(int * array, int))
int sum(int * array, int size)
{
    int total = 0;
    for(int i = 0 ; i < size; i++)
    {
        total+=*array+i;
    }
    return total;
}