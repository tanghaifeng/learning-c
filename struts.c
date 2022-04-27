#include <stdio.h>

/**
 * 定义结构体，并初始化
 */
struct Member
{
   int age;
   char *name;
} member = {18, "Tim"};

// typedef 为类型取个新的名字
typedef struct Books
{
   int num;
} Book;

/* 结构体 */
int main()
{

    int age = member.age;
    printf("%d\n", age);
    printf("%s", member.name);

    struct Member member1;
    member1.age = 20;
    member1.name = "Ben";
    printf("%d\n", member1.age);
    printf("%s\n", member1.name);

    Book b;
    b.num = 200;
    printf("%d\n",  b.num);
}