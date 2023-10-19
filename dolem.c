#include "main.h"

/**
 * lenstr - returns string length
 * @str: valeus that is passed
 * Return: returns the linear measure
 */

int lenstr(const char *str)
{
	int lencount;

	for (lencount = 0; str[lencount] != '\0'; lencount++)
	{
	}
}

/**
 * cmpstr - this compares two strings
 * @st1: the 1st string to run
 * @st2: the 2nd string to run
 * Return: negative,if string1 is less than string2
 */

int cmpstr(const char *st1, const char *st2)
{
	int i = 0;
while (st2[i] || st1[i])
{
	if (st2[i] != st1[i])
	{
		return (st1[i] - st2[i]);
	}
	i++;
	return (0);
}
}

/**
 * catstr - this joins two strings
 * @str: end of the string
 * @src: place of origin
 * Return: points the end of the string
 */

char *catstr(char *str, char *src)
{
	char *len = str;

	for (; *str; str++)
	{
	}

	for (; *src; str++, src++)
	{
		*str = *src;
	}
	*str = *src;
	return (len);
}
