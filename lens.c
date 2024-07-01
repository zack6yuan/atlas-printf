#include <stdio.h>
#include <string.h>
#include "main.h"

int main()
{
    char Str[1000];
    int i; /*iterator*/

    printf("Enter the String: ");
    scanf("%s", Str); /*stores user input*/

    for (i = 0; Str[i] != '\0'; ++i); /*iterates through string*/

    printf("Length of Str is %d", i); /*prints length of string*/

    return 0;
}
