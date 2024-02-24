#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n;
    char i;
    printf("Enter the letter to check if it is vowel or consonant: ");
    scanf("%c",&i);
    switch (i){
        case 'A':
        printf("The letter is vowel");
        break;
        case 'E':
        printf("The letter is vowel");
        break;
        case 'I':
        printf("The letter is vowel");
        break;
        case 'O':
        printf("The letter is vowel");
        break;
        case 'U':
        printf("The letter is vowel");
        break;
        case 'a':
        printf("The letter is vowel");
        break;
        case 'e':
        printf("The letter is vowel");
        break;
        case 'i':
        printf("The letter is vowel");
        break;
        case 'o':
        printf("The letter is vowel");
        break;
        case 'u':
        printf("The letter is vowel");
        break;
        default:
        printf("The letter is consonant");
        break;
    }

    return 0;
}
