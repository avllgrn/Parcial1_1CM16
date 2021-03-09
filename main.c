#include <stdio.h>

int main(void){

    char genero;
    int edad;
    float estatura;

    printf("Ingresa tu genero ");
    scanf("%c",&genero);
    printf("Ingresa tu edad ");
    scanf("%d",&edad);
    printf("Ingresa tu estatura ");
    scanf("%f",&estatura);

    printf("\n\nTu genero es: %c\n",genero);
    printf("Tu edad es: %d\n",edad);
    printf("Tu estatura es: %f\n",estatura);

    return 0;
}
