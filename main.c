#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    printf("\tEnter three real numbers to find the largest:-\n");
    printf("\t\tNumber 1: ");
    scanf("%d",&n1);
    printf("\t\tNumber 2: ");
    scanf("%d",&n2);
    printf("\t\tNumber 3: ");
    scanf("%d",&n3);
    (n1>n2&&n1>n3)?printf("\tThe largest number is %d",n1):(n2>n1&&n2>n3)?printf("\tThe largest number is %d",n2):printf("\tThe largest number is %d",n3);
    return 0;
}
