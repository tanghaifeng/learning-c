#include <stdio.h>

void trystat(void);
int main()
{
    int count;

    for (count = 0; count <=3; count++)
    {
        printf("Here comes iteration %d: \n", count);
        trystat();
        
    }
    return 0;
}


// Here comes iteration 0: 
// fade = 1 and stay = 1 
// Here comes iteration 1: 
// fade = 1 and stay = 2 
// Here comes iteration 2: 
// fade = 1 and stay = 3 
// Here comes iteration 3: 
// fade = 1 and stay = 4 
void trystat(void)
{
    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d \n", fade++, stay++);

}