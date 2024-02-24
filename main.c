#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,result=1;
    printf("Enter an integer number to get its factorial: ");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        result*=i;
    }
    printf("The factorial of %d is %d",num,result);
    return 0;
}
