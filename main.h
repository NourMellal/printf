#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>


#define ERROR -1


/**
 * struct format - struct for storing conversion specifiers and functions
 * @id: conversion specifier string (e.g. "%s")
 * @f: pointer to corresponding conversion function
 *
 * This struct is used to store conversion specifiers and corresponding
 * functions in the _printf function. The @id member is a string that
 * represents a conversion specifier (e.g. "%s" for strings). The @f member
 * is a pointer to the corresponding function that handles the conversion
 * specifier (e.g. printf_string for "%s"). Together, the @id and @f members
 * allow the _printf function to handle a variety of conversion specifiers
 * in a flexible and extensible manner.
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);

int printf_char(va_list val);
int printf_37(void);
int printf_string(va_list val);

int _putchar(char c);
int _puts(char *str);

int _strlen(char *s);
int _strlenc(const char *s);
void _itoa(long n, char s[]);
void reverse_str(char s[]);
int print_srev(va_list args);
int print_int(va_list list);


#endif /*MAIN_H*/
