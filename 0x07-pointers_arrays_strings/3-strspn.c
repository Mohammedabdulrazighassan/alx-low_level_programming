#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int hello, h;

	for (hello = 0; s[hello] != '\0'; hello++)
	{
		for (h = 0; accept[h] != s[hello]; h++)
		{
			if (accept[h] == '\0')
				return (hello);
		}
	}
	return (hello);
}
