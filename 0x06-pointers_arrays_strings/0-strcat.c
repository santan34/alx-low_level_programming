/**
 * _strcat - concatinate two strings
 *
 * @dest:the value src will be concatiiinated to
 * @src: the value to be concatinated to dest
 *
 * Return :the varibale dest is returned0-strcat.c
 */
char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;

	}
	*temp = '\0';
	return (dest);
}
