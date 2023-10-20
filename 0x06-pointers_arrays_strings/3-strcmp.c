/**
 * _strcmp - checks if 2 strings are of equal value
 * @s1: destination string
 * @s2: source string to be copied
 *
 * Return: difference of first character and the second character
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' && s2[j] != '\0'; j++)
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	return (0);
}
