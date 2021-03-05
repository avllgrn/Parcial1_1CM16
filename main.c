#include <stdio.h>

int main(void){

    float base;
    float altura;
    float area;
    float perimetro;

    printf("Este programa calcula el area y el perimetro de un rectangulo\n\n");

    base = 2.2;
    altura = 4.4;

    area = base * altura;
    perimetro = 2*base + 2*altura;

    printf("Base\t\t= %f\n",base);
    printf("Altura\t\t= %f\n",altura);
    printf("Area\t\t= %f\n",area);
    printf("Perimetro\t= %f\n",perimetro);

    return 0;
}
