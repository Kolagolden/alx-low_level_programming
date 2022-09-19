#include "main.h"
/**
 *  * _puts - prints a string, followed by a new line.
 *   * @str: input string.
 *  Description: Prints a string, followed by a new line
 *    * Return: no return.
     */
void _puts(char *str)
{
		int count = 0;

		while (count >= 0)
		{
		if (str[count] == '\0')
		{
		_putchar('\n');
		break;
		}
		_putchar(str[count]);
		count++;
		}
}