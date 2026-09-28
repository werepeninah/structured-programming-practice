#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, divisor, is_prime;
    printf("Prime numbers between 1 and 100:\n");

    for(num = 2; num<=100; num++){
        is_prime = 1;

        for (divisor =2; divisor < num; divisor++){
            if (num % divisor ==0){
                is_prime = 0;
            }
        }

        if (is_prime == 1){
            printf("%d\n", num);
        }
    }


    return 0;
}
