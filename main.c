#include <stdio.h>

int main(void){
    //Codifica un programa que convierte de
    //Fahrenheit a Celsius

    float celsius;
    float fahrenheit;

    printf("Ingresa fahrenheit ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0 ;

    printf("%f F = ",fahrenheit);
    printf("%f C\n",celsius);

    return 0;
}
