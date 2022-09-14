#includer "main.h"

/**
 * main - check if a character is alphabet 
 *
 * Return: 1 if character is letter, lowercase,or uppercase, 0 when not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
