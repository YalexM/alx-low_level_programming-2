#include "main.h"
#include<string.h>

/**
 * puts2 -> puts2 function.
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
