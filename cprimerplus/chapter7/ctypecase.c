#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    while ((ch = getchar() != '\n'))
    {
       
       // TODO 好像函数未生效
        if (islower(ch))
        {
             printf("%s", "in");
             putchar(ch + 1);

        } else {
             putchar(ch);
        }
    }
    return 0;
    
}