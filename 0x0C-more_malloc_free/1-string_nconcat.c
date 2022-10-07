#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - a function that concatenates two strings.
 *@s1: destination string .
 *@s2: string to be concatenated
 *@n: number of bytes to copied
 *Return: char pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int t, size1 = 0, size2 = 0;
/*checking if the 2 strings are empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

/* calculating the length of both strings */
	while (*(s1 + size1) != '\0')
		size1++;
	while (*(s2 + size2) != '\0')
		size2++;

	if (size2 >= n)
		size2 = n;
/* allocating the needed memory for the 2 strings*/
	s = malloc(size1 + n + 1);
	if (s == NULL)
		return (s);
/* copying the first string to the allacoted memory */
	for (t = 0; t < size1; t++)
		s[t] = s1[t];

	for (t = 0; t < n; t++)
		s[t + size1] = s2[t];

	s[size1 + t] = '\0';
	return (s);
}
