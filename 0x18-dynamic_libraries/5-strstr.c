#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *g = needle;

		while (*e == *g && *g != '\0')
		{
			e++;
			g++;
		}

		if (*g == '\0')
			return (haystack);
	}
	return (0);
}

