#include <stdio.h>

// d	以十进制形式输出带符号整数(正数不输出符号)
// o	以八进制形式输出无符号整数(不输出前缀0)
// x,X	以十六进制形式输出无符号整数(不输出前缀Ox)
// u	以十进制形式输出无符号整数
// f	以小数形式输出单、双精度实数
// e,E	以指数形式输出单、双精度实数
// g,G	以%f或%e中较短的输出宽度输出单、双精度实数
// c	输出单个字符
// s	输出字符串
// p	输出指针地址
// lu	32位无符号整数
// llu	64位无符号整数

int main() 
{
    printf("%d\n",11);

    printf("%o\n",11);

    printf("%x\n",11);

    printf("%f\n",11.1);

    printf("%c\n",'c');

    char str[20] = "www.runoob.com";
    printf("%s\n", str);

    printf("%lu\n",sizeof(int));
}