#include <stdio.h>
#include <math.h>


int main(void){

    float a, b, c, x1, x2;

    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);

    x1 = (-b+sqrt(pow(b,2)-4*a*c)) / (2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c)) / (2*a);

    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);

    return 0;
}
