#include <stdio.h>
void main() 
{
    float l, b, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area of rectangle = %.2f", area);
    printf("Perimeter of rectangle = %.2f", perimeter);
}