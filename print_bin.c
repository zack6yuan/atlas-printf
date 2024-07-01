#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * void bin - print binary
 * Return: string to a binary
 */

void bin(long n)
{
        long i;
        printf("0");
        for (i = 1 << 31; i > 0; i = i / 2){
                if ((n & i) != 0){
                        printf("1");
                }
                else {
                        printf("0");
                }
        }
}
