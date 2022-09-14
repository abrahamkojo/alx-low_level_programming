#include "main.h"

/**
 * _isalpha - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: prints all lowercase letters
 * Return: Always 0.
 */
int _isalpha(int c)
{
if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
