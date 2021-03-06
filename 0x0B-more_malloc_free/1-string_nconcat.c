#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s);
/**
 * string_nconcat - concats the first string with n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: how many bytes to take from s2
 * Return: return the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;
	unsigned int len1, total;
	char nul = '\0';

	if (s1 == NULL)
		s1 = &nul;
	if (s2 == NULL)
		s2 = &nul;

	len1 = _strlen(s1);

	total = len1 + n + 1;

	s = malloc((total) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		s[i] = s1[i], i++;
	j = 0;
	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
/**
 * _strlen - prints the length of a string
 * Description: cycles through the array of s until its false
 * @s: input from file
 * Return: returns the length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;

	return (counter);
}
