#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case, followed by a new lin
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}