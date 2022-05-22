#include <stdio.h>
#include <string.h>

int main()
{
    // strlen 字符串长度
    char * str = "Tim";
    printf("%zd", strlen(str));


    // strcat 拼接字符串
    char member[80] = "member";
    char age[10] = "18";
    strcat(member, age);
    puts(member);
    return 0;
}