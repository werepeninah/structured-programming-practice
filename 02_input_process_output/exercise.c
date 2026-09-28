#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_seconds, hours, minutes, seconds;

    printf("Enter total time elapsed in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;

    minutes = (total_seconds % 3600) / 60;

    seconds = total_seconds % 60;

    printf("%d hours:%d minutes:%d seconds\n", hours, minutes, seconds);

    return 0;
}
