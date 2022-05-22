#include <stdio.h>

// 双引号会自动的在字符串末尾加上\0
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

// puts() 函数值显示字符串，并且自动在显示字符串末尾加上了换行符

int main()
{
    char words[MAXLENGTH] = "I am a string in an array .";
    const char * pt1 = "Something is pointing at me";

    puts("Here are some string: ");

    puts(MSG);

    puts(pt1);

    words[8] = 'P';

    puts(words);


    return 0;
}