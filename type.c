#include <stdio.h>

// char	1 字节	-128 到 127 或 0 到 255

// unsigned char	1 字节	0 到 255

// signed char	1 字节	-128 到 127

// int	2 或 4 字节	-32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647

// unsigned int	2 或 4 字节	0 到 65,535 或 0 到 4,294,967,295

// short	2 字节	-32,768 到 32,767

// unsigned short	2 字节	0 到 65,535

// long	4 字节	-2,147,483,648 到 2,147,483,647

// unsigned long	4 字节	0 到 4,294,967,295

int main()
{
    printf("int 存储大小： %lu\n", sizeof(int));

    printf("short 存储大小： %lu\n", sizeof(short));

    return 0;
}