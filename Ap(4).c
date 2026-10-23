#include <stdio.h>
void main ()
{
    float amount, discount = 0, delivery = 0, finalAmount;
    int member;
    printf("Enter order amount: ");
    scanf("%f", &amount);
    printf("Enter membership type (1-Premium, 0-Regular): ");
    scanf("%d", &member);
    if (amount >= 500)
    {
        delivery = 0;

        if (member == 1)
            discount = amount * 0.10;
    }
    else
    {
        delivery = 50;
        discount = 0;
    }
    finalAmount = amount - discount + delivery;
    printf("Final amount to pay = Rs. %.2f", finalAmount);
}