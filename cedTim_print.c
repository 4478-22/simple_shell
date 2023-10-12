#include "shell.h"

/**
 * cedy_print - prints a string to the standard output
 * @sez - string to be printed
 *
 */

void cedy_print(const char *sez)
{
	write(STDOUT_FILENO, sez, strlen(sez));
}
