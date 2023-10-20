#include "main.h"

/**
 * strncmp_made - compares three different values
 * @st1: the initial value
 * @st2: the sunsequent value
 * @i: a whole number
 * Return: successful on zero
 */

int strncmp_made(const char *st1, const char *st2, size_t i)
{
    while (i > 0)
    {
       if (*st1 != *st2)
	{
   		 return (*st1 - *st2);
	}
        if (*st1 == '\0')
        {
            return (0);
        }
        st1++;
        st2++;
        i--;
    }
    return (0);
}



/**
 * _strdup - this produces a copy
 * @str: the copied string
 * Return: the string that is copied
 */


char *_strdup(const char *str)
{	
	char *new_str1;
	size_t strlen1;
	
	strlen1 = lenstr(str) + 1;
	new_str1 = (char *)malloc(strlen1);
	if (new_str1 == NULL)
	{
		perror("Allocation mistake");
		exit(98);
	}
	cpystr(new_str1, str);
	return (new_str1);
}


/**
 * cpystr - This reprints a string
 * @str: end of the string
 * @src: the string origin
 * Return: the end
 */

char *cpystr(char *str, const char *src)
{
	int i = 0;

	if (str == src || src == 0)
		return  (str);
	for (; src[i]; i++)
	{
   	str[i] = 0;
	return (str);
	}
}
