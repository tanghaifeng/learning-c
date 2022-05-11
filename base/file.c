#include <stdio.h>

void write(void);
void read(void);
int main()
{
    write();
    read();
    return 0;
}

// 写文件
void write()
{
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "%s", "Tim111");
    fclose(fp);
}

// 读文件
void read()
{
    FILE *fp;
    int c;
    fp = fopen("file.txt", "r");
    while (1)
    {
        c = fgetc(fp);
        if(feof(fp))
        {
            break;
        }
        printf("%c", c);
      
    }
    fclose(fp);
}