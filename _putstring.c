#include "main.h"
/**
 * _putstring - puts string from putchar
 * @c: pointer to string
 */
void _putstring(char *c)
{
	int i = 0;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
}
