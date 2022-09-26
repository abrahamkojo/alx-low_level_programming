#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char to check
 * @accept: char to look for
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (t = 0; accept[k] != '\0'; t++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return (0);
}
