#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum=0;
    for (i =7; i <=100; i += 7){
        sum += i;
    }

    printf("The sum of all multiples of 7 from 1 to 100 is: %d\n", sum);
    return 0;
}
