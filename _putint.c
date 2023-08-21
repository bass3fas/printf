#include <unistd.h>
#include "main.h"
/**
 * _putint - puts int
 * @i: int to put
 */
void _putint(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10 != 0)
		_putint(i / 10);
	_putchar(i % 10 + '0');
}
