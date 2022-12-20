#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the string
 * @s: input of pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i, j, k;

	j = 0;
	k = 0;
	while (s[j] != '\0')
		j++;
	k = j - 1;
	for (i = 0; i < j ; i++)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k] = tmp;
		k - = 1;
	}
}
