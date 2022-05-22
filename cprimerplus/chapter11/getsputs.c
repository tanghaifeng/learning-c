#include<stdio.h>

#define MAXLEN 81
int main()
{
    char words[MAXLEN];
    puts("Enter a string, please.");

    // warning: this program uses gets(), which is unsafe.不建议使用
    gets(words);

    puts(words);


    return 0;
}