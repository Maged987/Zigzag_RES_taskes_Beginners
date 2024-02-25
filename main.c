#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number to get its multiplication table: ");
    scanf("%d",&num);
    printf("The multiplication table of %d is :-\n",num);
    for (int i=1;i<13;i++){
        printf("\t%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}
