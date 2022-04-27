#include <stdio.h>

// 默认是0 定义枚举的同时定义枚举变量day
enum Day
{
  MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;

int main()
{
   
   // 遍历枚举元素
    for (day = MON; day <= SUN; day++) {
        printf("枚举元素：%d \n", day);
    }
    return 0;
}

