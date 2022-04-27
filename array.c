#include <stdio.h>
int main() 
{
    int age[3] = {1,3,5};

    // 总空间除以单个元素占的内存就是 length
    int length = sizeof(age) /sizeof(age[0]);

    for (int i=0; i < length; i++) {
        printf("%d\n",age[i]);
    }

}