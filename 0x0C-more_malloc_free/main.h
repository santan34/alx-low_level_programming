#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif