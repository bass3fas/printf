#include <unistd.h>
/**
 * _putchar - puts a single chr
 * @c: chr to print
 */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
