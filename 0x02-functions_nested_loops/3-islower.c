#include "main.h"

/**
 * main - checks if a character is lowercase
 *
 * Description: character checker
 * Return: 1 if character is lowercase,0 if is not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
