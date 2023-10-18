#include "main.h"

/**
 * lenstr - returns string length
 * @str: valeus that is passed
 * Return: returns the linear measure
 */

int lenstr(const char *str)
{
	int countval;

	for (countval = 0; str[countval] != '\0'; countval++)
	{
	}
	return (0);
}

/**
 * cmpstr - this compares two strings
 * @string1: the 1st string to run
 * @string2: the 2nd string to run
 * Return: negative,if string1 is less than string2
 */

int cmpstr(const char *string1, const char *string2)
{
	int dm = 0;
while (string2[dm] || string1[dm])
{
	if (string2[dm] != string1[dm])
	{
		return (string1[dm] - string2[dm]);
	}
	dm++;
}
	return (0);
}

/**
 * catstr - this joins two strings
 * @str: end of the string
 * @source: place of origin
 * Return: points the end of the string
 */

char *catstr(char *str, char *source)
{
	char *area = str;

	for (; *str; str++)
	{
	}
	for (; *source; str++, source++)
	{
		*str = *source;
	}
	*str = *source;
	return (area);
}
