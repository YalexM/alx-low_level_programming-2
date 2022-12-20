#include "main.h"

/**
 * puts_half - function that prints helf of a string .
 * @str: This is the input string
 */
void puts_half(char *str)
{
int n, h;
n = 0;
while (str[n] != '\0')
	n++;
h = n / 2;
if (n % 2 == 1)
	h++;
while (h < n)
{
	_putchar(str[n]);
}
_putchar('\n');
}
