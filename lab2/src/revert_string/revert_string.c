#include "revert_string.h"
#include <stdio.h>
#include <string.h>
#include <locale.h>

void RevertString(char *str)
{
  int l, i;
  char *begin_ptr, *end_ptr, ch;

// Get the length of the string
l = strlen(str);

// Set the begin_ptr and end_ptr
// initially to start of string
begin_ptr = str;
end_ptr = str;

// Move the end_ptr to the last character
for (i = 0; i < l - 1; i++)
end_ptr++;

// Swap the char from start and end
// index using begin_ptr and end_ptr
for (i = 0; i < l / 2; i++) {

// swap character
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;

// update pointers positions
begin_ptr++;
end_ptr--;
}
}


// создание статической библиотеки
//gcc -c revert_string.c -o revert_string.o
// ar rc libMY_STATIC.a revert_string.o
// ranlib libMY_STATIC.a
//gcc main.c libMY_STATIC.a - компановка программы с использованием статической библиотеки
// ./a.out helioooo - вызов программы

// создание динамической библиотеки
// gcc -fPIC -c revert_string.c -o Revert_string.o
// gcc -shared -o libMY_DYNAMIC.so Revert_string.o  - -shared - предписывает создать динамическую библиотеку.
//gcc main.c libMY_DINAMIC.so -o -lRevert_string
