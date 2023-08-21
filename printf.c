#include "main.h"
/**
 * _printf - prints any thing
 * @format: pointer to the sentence
 * Return: no of flags
 */
int _printf(const char *format, ...)
{
	unsigned int i, f;

	f = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
			f++, i++;
	}
	return (f);
}
