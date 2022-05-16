#include <stdio.h>
#define PI 3.14
int main()
{
    // #define 定义的常量在编译时就写入了对应的值
    float area, circum, radius;
    printf("What is the radius of your pizza? \n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("%f,%f", area, circum);

    return 0;
}