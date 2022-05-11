#include <stdio.h>

void print_name(void);

void print_user_info(void);

void print_smile(int);

int main()
{
    int a , b;
    a = 5;
    b =2;
    b = a;
    a = b;
    printf("a: %d b: %d .\n",a ,b); // 5 5
    print_name();
    print_user_info();
    print_smile(3);
    return 0;
}

// 按格式打印自己的名字
void print_name()
{
    printf("%s %s .\n","Tim", "tang");
    printf("%s .\n %s .\n","Tim", "tang");

}

// 打印信息
void print_user_info()
{
    printf("name: %s, address: %s", "tim","changzhou china");
}

// 打印微笑
void print_smile(int size)
{

    for (int i = size; i >= 0; i--)
    {
        int sizej = i;
        char s[6] = {'S', 'm', 'i', 'l', 'e', '!'};
        
        for (int j = 0; j <= sizej; j++) {
            printf("%s",s);
        }
         printf("\n");
    }

}