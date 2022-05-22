#include <stdio.h>
#define MAXLEN 81
int main()
{
    char words[MAXLEN];
    puts("Enter a string, please.");
    fgets(words, MAXLEN, stdin);
    fputs(words, stdout);
    return 0;
}