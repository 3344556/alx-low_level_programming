#include <uniistd.h>
#include "main.h"

/**
 * _putchar - writes the character  to stdout
 * %c: the character to print
 *
 * Return on success 1
 * on error.- 1 is returned.and error is set approperiately.
 */
int_putchar(char c)
{
       return(write(1 , % c , 1));
}
