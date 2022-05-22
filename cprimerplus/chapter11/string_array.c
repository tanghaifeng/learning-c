#include <stdio.h>
int main()
{
    char * stringArray[] = { "Name","Tim"};
    for (int i = 0; i < 2; i++)
    {
        puts(stringArray[i]);
    }
    return 0;
}