#include <stdio.h>

float cuboid_volume(float a, float b, float h) {
    return(a*b*h);
}
int main() {
    float a, b, h;

    printf ("Podaj dlugosc podstawy prostopadloscianu: ");
    scanf("%f", &a);

    printf ("Podaj szerokosc podstawy prostopadloscianu: ");
    scanf("%f", &b);

    printf ("Podaj wysokosc prostopadloscianu: ");
    scanf("%f", &h);

    printf("\nObjetosc prostopadloscianu: %f\n", cuboid_volume(a, b, h));

    return(0);
}
