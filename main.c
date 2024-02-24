#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number of days of the year: ");
    scanf("%d",&num);
    if (num == 365){
            printf("This year is not a leap year");
    }
    else if (num == 366){
            printf("This year is a leap year");
    }
    else {
            printf("Wrong number");
    }

    return 0;
}
