#include "main.h"
#include<string.h>

/**
 * puts2 - print very other character in string.
 * @s: str parameter.
 *
 * Return: void.
 */

void puts2(char *str)
{
int a;
a = 0;
	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
