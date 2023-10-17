#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int i;
    	int count;

    	if (s == "")
	{
		return (0);
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
        	{
                	count=i;
        	}
        	return (count+1);
	}
      
}
