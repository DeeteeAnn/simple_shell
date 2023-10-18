#include "main.h"

/**
 * strncmp_made - compares three different values
 * @string1: the initial value
 * @string2: the sunsequent value
 * @dm: a whole number
 * Return: successful on zero
 */

int strncmp_made(const char *string1, const char *string2, size_t dm)
{
    size_t dm;
    while (dm > 0)
    {
       if ((unsigned char)*string1 != (unsigned char)*string2)
	{
   		 return ((unsigned char)*string1 - (unsigned char)*string2);
	}
        if (*string1 == '\0')
        {
            return (0);
        }
        string1++;
        string2++;
        dm--;
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
	char *adv_str1;
	size_t lenstr;
	

	lenstr = stringlength(str) + 1;
	adv_str1 = (char *)malloc(lenstr);
	if (adv_str1 == NULL)
	{
		perror("Allocation mistake");
		exit(98);
	}
	cpystr(adv_str1, str);
	return (adv_str1);
}


/**
 * cpystr - This reprints a string
 * @str: end of the string
 * @source: the string origin
 * Return: the end

char *cpystr(char *str, const char *source)
{
	int dm = 0;

	if (str == source || source == NULL)
		return  (str);
	for (; source[dm]; dm++)
	{
   	str[dm] = source[dm];
	}
}
