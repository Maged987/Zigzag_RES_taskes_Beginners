#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num=0.0,power=0.0;
    printf("please enter a number to get its power: ");
    scanf("%f",&num);
    printf("please enter the power: ");
    scanf("%f",&power);
    printf("%f power %f is equal to %f",num,power,pow(num,power));
    return 0;
}
