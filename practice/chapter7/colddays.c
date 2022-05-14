#include <stdio.h>
int main()
{
    const int FREEZING = 0;
    float temperature;
    int cold_day = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperature .\n");

    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING) 
        {
            cold_day++;
        }

        if (all_days != 0) 
        {

            printf("%d days total: %.1f%% were bellow freezing .\n", all_days, 100.0 * (float)cold_day / all_days);


        }

        if (all_days == 0) 
        {

            printf("No data enterd! .n");

        }

    }
    return 0;
}