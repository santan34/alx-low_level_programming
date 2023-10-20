/**
 *_strncat concatinates two strings up to n
 *
 * @dest:the value src will be concatiiinated to
 * @src: the value to be concatinated to dest
 * @n :the value we concatinate to
 *
 * Return :the varibale dest is returned0-strcat.c
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp;
	int i;
	
	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}
	for (i = 0; i < n; i++)
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';
	return (dest);
}
