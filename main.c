#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int add (int i,int j);
int sub (int i,int j);
int mul (int i,int j);
int divi (int i,int j);

int main()
{
    int n,n1,n2;
    printf("\t\t\t ======================== \n");
    printf("\t\t\t ==   1.summation      == \n");
    printf("\t\t\t ==   2.subtraction    == \n");
    printf("\t\t\t ==   3.multiplication == \n");
    printf("\t\t\t ==   4.Division       == \n");
    printf("\t\t\t ======================== \n");
    printf("\t\t\t choose number of process: ");
    scanf("\t\t\t%d",&n);
    switch (n)
    {
        case 1:
            system("cls");
            printf(add(n1,n2));
            break;

        case 2:
            system("cls");
            printf(sub(n1,n2));
            break;
        case 3:
            system("cls");
            printf(mul(n1,n2));
            break;
        case 4:
            system("cls");
            printf(divi(n1,n2));
            break;
    }
    return 0;

}

int add (int i,int j)
{
    printf("\t\t\t=================================================\n");
    printf("\t\t\tEnter two numbers to have summation of them :   ");
    scanf("%d",&i);
    printf("\t\t\t\t\t\t\t\t\t");
    scanf("%d",&j);
    printf("\t\t\tThe result is %d\n",i+j);
    printf("\t\t\t=================================================\n");
}

int sub (int i,int j)
{
    printf("\t\t\t=================================================\n");
    printf("\t\t\tEnter two numbers to have subtraction of them : ");
    scanf("%d",&i);
    printf("\t\t\t\t\t\t\t\t\t");
    scanf("%d",&j);
    printf("\t\t\tThe result is %d\n",i-j);
    printf("\t\t\t=================================================\n");
}

int mul (int i,int j)
{
    printf("\t\t\t===================================================\n");
    printf("\t\t\tEnter two numbers to have multiplication of them: ");
    scanf("%d",&i);
    printf("\t\t\t\t\t\t\t\t\t: ");
    scanf("%d",&j);
    printf("\t\t\tThe result is %d\n",i*j);
    printf("\t\t\t===================================================\n");
}

int divi (int i,int j)
{
    printf("\t\t\t==============================================\n");
    printf("\t\t\tEnter two numbers to have Division of them: ");
    scanf("%d",&i);
    printf("\t\t\t\t\t\t\t\t  : ");
    scanf("%d",&j);
    printf("\t\t\tThe result is %d and %d/%d\n",i/j,i%j,j);
    printf("\t\t\t==============================================\n");
}








