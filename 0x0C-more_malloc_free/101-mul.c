#include <stdlib.h>
#include "main.h"
/**
  * string_nconcat - concatenates two strings.
  * @s1: pointer to first string.
  * @s2: pointer to second string from which we'll take first n bytes.
  * @n: n bytes of s2.
  *
  * Return: pointer to newly allocated space in memory.
  * NULL if malloc fails.
  */
 * _strlen - get length of string.
 * @str: string.
 * Return: length.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: strging 1.
 * @s2: string 2.
 * @n: byets of s2 to include.
 * Return: pointer to a string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int len1, len2, size, i, j;
	char *str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	size = len1 + n;

	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
	str = malloc(len1 + n + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
	for (i = 0; i < len1; ++i)
		str[i] = s1[i];
	for (j = 0; j < n; ++j, ++i)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
