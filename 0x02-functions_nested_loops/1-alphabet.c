#include "main.h"

/**
 * Print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0 ( Success)
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}

	 _putchar('\n');
}
