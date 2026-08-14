/* Simple and Compound Interest Calculator */
#include <stdio.h>

int main()
{
    float p, r, t, si, ci, amount;
    int i;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    amount = p;

    for(i = 1; i <= t; i++)
    {
        amount = amount + (amount * r / 100);
    }

    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}