#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter a real number to check odd or even: ");
    scanf("%d",&i);
    if (i%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}
