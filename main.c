#include <stdio.h>
#include <stdlib.h>

int swap (int num1,int num2);
int main()
{
    int i,j;
    printf("Enter two numbers to swap them:\n");
    printf("\t");
    scanf("%d",&i);
    printf("\t");
    scanf("%d",&j);
    printf(swap(i,j));
    return 0;
}
// function of swapping
int swap(int num1,int num2)
{
    int temp;
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
    printf("Two number after swapping: %d , %d",num1,num2);
}
