#include <stdio.h>
#include <string.h>

#define DENSITY 62.4

int main()
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi Whats your fisrt name? \n");
    scanf("%s", name);
    letters = strlen(name);
    printf("name length is %d .\n", letters);
    
    // sizeof 是容量 strlen是内容字符长度
    printf("%lu \n", strlen(name));
    printf("%zd", sizeof name);
    return 0;
}