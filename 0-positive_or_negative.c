#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints arandom number and states whether it is positive ,negative , or zero
 *
 * Return: Always 0.
 */
int main(viod)
{
int a;
srand(time(0));
a = rand() - RAND_MAX / 2;
if (a > 0)
printf("%d is positive\n", a);
else if (a < 0)
printf("%d is negative\n", a);
else
printf("%d is zero\n", a);
return (0);
}
