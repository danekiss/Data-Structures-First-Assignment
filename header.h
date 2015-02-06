#ifndef HEADER_H
#define HEADER_H

#include <stdio.h> // printf, scanf, gets, I/O stream
#include <string.h> // functions that do string parsing. (strcmp)
#include <stdlib.h> // malloc(), realloc(), etc.
#include <ctype.h> // isalpha(), isupper(), islower(), toupper(), tolower(), etc.
#include <math.h>
#include <time.h>

void order_strings(char **string_array, char ch, int str_length);
void check_palindrome(char *NoWSstring, char *str, int begin, int end);
void palindrome(char *str);
void driver();

char *WSRemover(char *str);
char *caesar_shift();


#endif
