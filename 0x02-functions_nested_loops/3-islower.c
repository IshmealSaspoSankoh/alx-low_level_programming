#include "main.h"
/**
 * _islower - show 1 if the input is a lowercase character.Another cases, shows
 * 0
 * The character in ASCII code
 * Return: 1 for lowercase character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
