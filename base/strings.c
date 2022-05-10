#include <stdio.h>
#include <string.h>

// 字符很多处理函数在string.h
int main()
{
    char name[3] = {'T','i', 'm'};

    printf("name: %s\n", name);

    for (int i=0; i < strlen(name); i++)
    {
         printf("%c\n", name[i]);
    }
    return 0;
}