#include "main.h"

/**
 * _puts_recursion - Prints a string to stdout
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
  if (*s)
  {
    _putchar(*s);
    _puts_recursion(++s);
  }
}
