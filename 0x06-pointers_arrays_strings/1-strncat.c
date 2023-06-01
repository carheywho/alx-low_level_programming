#include "main.h"
/**
 *_strncat joins two strings  with n bytes
 *@dest: copy to
 *@src: copy from
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
			{
			deest[i] = src[k];
			p++;
			k++;
			}
	dest[i] = '\0';

	return (dest);
}
