/**
 * _strlen_recursion - count the number of letters in a string
 * @s: string to be counted
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		count = _strlen_recursion(s + 1);
		return (count += 1);
	}
	else
	{
		return (count);
	}
}
