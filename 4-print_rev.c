#include "main.h"

/**
 * print_rev - this function is reverse a string
 * @s: this is the input string
 */

void print_rev(char *s)
{
int n;
for (n = 0; s[n] != '\0'; n++)
	for (n = n - 1; n >= 0; n--)
{
		_putchar(s[n]);
}
_putchar('\n');
}
