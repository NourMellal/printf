#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>


int printf_char(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_string(va_list val);



#define BUUFER_SIZE 1024;


#endif /*MAIN_H*/