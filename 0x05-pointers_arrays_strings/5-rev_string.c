#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[1] != '\0'; ++l)
	;

	for (i = 0; i < l / 2; i++)
	{
         temp = s[i];
         s[i] = s[l - 1 - i];
         s[l - 1 - i] = temp;
	}
}
