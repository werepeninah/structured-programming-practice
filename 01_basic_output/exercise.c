#include <stdio.h>
#include <stdlib.h>
// Exercise 1: Basic Output
int main()
{
    //Basic output
    int num_one, num_two, sum, product, difference, quotient, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num_one);

    printf("Enter another integer: ");
    scanf("%d", &num_two);

    sum = num_one+num_two;
    printf("Sum: %d\n", sum);

    product = num_one*num_two;
    printf("Product: %d\n", product);

    difference = num_one - num_two;
    printf("Difference: %d\n", difference);

    quotient = num_one / num_two;
    printf("Quotient: %d\n", quotient);

    remainder = num_one % num_two;
    printf("Remainder: %d\n", remainder);


    return 0;
}
