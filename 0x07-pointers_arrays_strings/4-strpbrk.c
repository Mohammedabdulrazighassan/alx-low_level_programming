#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int hello, h;
	char *p;

	hello = 0;
	while (s[hello] != '\0')
	{
		h = 0;
		while (accept[h] != '\0')
		{
			if (accept[h] == s[hello])
			{
				p = &s[hello];
				return (p);
			}
			h++;
		}
		hello++;
	}

	return (0);
}
