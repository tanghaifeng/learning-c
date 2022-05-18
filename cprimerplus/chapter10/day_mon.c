#include <stdio.h>
int main()
{
    // [] 不填大小 编译器自动匹配数组大小
    
    const int days[] = {31, 28, 31, 30, 31,30, 31, 31, 30, 31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
    {
        printf("Month %2d has %d days.\n", index+1, days[index]);
    }

    return 0;
}