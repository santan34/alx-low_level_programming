#include <unistd.h>
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
void reverse_array(int *a, int n);
char *cap_string(char *);
char *leet(char *);
char *string_toupper(char *);
char *rot13(char *);
int _putchar(char c);
int _putchar(char c)
{
	return (write(1, &c, 1));
}
