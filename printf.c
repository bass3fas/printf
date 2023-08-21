#include "main.h"
/**
 * _printf - prints any thing
 * @format: pointer to the sentence
 * Return: no of flags
 */
int _printf(const char *format, ...)
{
	int i, f, count;
	va_list list;

	va_start(list, format);
	f = 0;
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else
		{
			f++, i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(list, int));
					count++;
					break;
				case 's':
					count += _putstring(va_arg(list,
								   char *));
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;
			}
		}
	}
	va_end(list);
	return (count);
}
