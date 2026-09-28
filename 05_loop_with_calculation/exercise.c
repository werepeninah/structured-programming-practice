#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsuis, fahrenheit;

     printf("-------------------\n");
     printf("Celsius\tFahrenheit\n");
     printf("-------------------\n");

     for (celsuis = 30; celsuis <=50; celsuis++){
        fahrenheit =(celsuis * 9 / 5) + 32;
        printf("%.2f\t%.2f\n", celsuis, fahrenheit);
     }
    return 0;
}
