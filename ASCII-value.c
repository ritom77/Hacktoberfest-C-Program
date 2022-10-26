/*  C program to print ASCII value of entered character  */

#include <stdio.h>

int main()
{
    char ch;
    int asciiValue;

    printf("Enter any character: ");
    scanf("%c",&ch);

    asciiValue=(int)ch;

    printf("\nASCII value of character: %c is: %d\n",ch,asciiValue);


}
