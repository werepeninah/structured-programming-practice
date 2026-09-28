#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, total_numbers, value, average, sum=0;

    printf("Enter the number of integers to process: ");
    scanf("%d", &total_numbers);

    for (i = 1; i <= total_numbers; i++){
        printf("Enter value %d: ",i);
        scanf("%d", &value);
        sum += value;
    }

    average = sum/ total_numbers;

    printf("\nTotal Sum: %d\n", sum);
    printf("Average: %d\n", average);
    return 0;
}
