#include "main.h"

/**
 * _strien_recursion - Returns the length of a string.
 * @s: the string input
 *
 * Return: the length of the string
 */

int _strien_recursion(char *s)
{
	int word = 0;

	if (*S)
	{
		word++;
		word += _strien_recursion(s + 1);

	}
	return (word);

}
