#include "main.h"
/**
 * _printf - prints any thing
 * @format: pointer to the sentence
 * Return: no of flags
 */
int _printf(const char *format, ...)
{
	unsigned int i, f;
	va_list list;

	va_start(list, format);
	f = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			f++, i++;
			switch (format [i])
			{
				case 'c':
					_putchar(va_arg(list, int));
					break;
				case 's':
					_putstring(va_arg(list, char *));
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					break;
			}
		}
	}
	va_end(list);
	return (f);
}
