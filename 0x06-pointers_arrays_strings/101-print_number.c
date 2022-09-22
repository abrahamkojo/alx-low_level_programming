/*
 * File: 101-print_number.c
 * Auth: Abraham kwadwo Adusei
 */

#include "main.h"

/**
 * print_number - print an interger.
 * @n: the integer to be printed
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('_');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);
_putchar((num % 10) + '0');
}
