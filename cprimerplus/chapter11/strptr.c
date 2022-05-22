#include <stdio.h>

int main()
{
    printf("%s, %p, %c .\n", "We","are", *"space farers");

    char heart[] = "My name Tim";
    const char * head = "My name Tim";

    printf("%p .\n", heart);
    printf("%p .\n", head);

    for(int i = 0; i < 11; i++)
    {
        putchar(heart[i]);
    }

    putchar('\n');

    for(int i = 0; i < 11; i++)
    {
        putchar(head[i]);
    }
    putchar('\n');



    for(int i = 0; i < 11; i++)
    {
        putchar(*(heart+i));
    }

    putchar('\n');

    for(int i = 0; i < 11; i++)
    {
        putchar(*(head+i));
    }

    putchar('\n');

    // 只有指针表示法可以进行递增操作
    while (*(head) != '\0')
    {
        putchar(*(head++));
    }

    // head 指针指向了heart 数组的首元素
    head = heart;


    const char * mesg = "I am Tim";
    const char * cp;
    cp = mesg;
    printf("%s .\n", cp);
    printf("%p .\n", mesg);
    printf("%p .\n", cp);
    
    return 0;
}