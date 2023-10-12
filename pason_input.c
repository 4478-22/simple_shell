#include "shell.h"

/**
 * wried_coms - Read user input from stdin
 * @kemend - Pointer to the input buffer
 * @size - size of the input buffer
 *
 */

void wried_coms(char *kemend, size_t size)
{
	ssize_t wroid_size = getline(&kemend, &size, stdin);

	if (wroid_size == -1)
	{
		if (feof(stdin))
		{
			cedy_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			cedy_print("Error occured while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	kemend[strcspn(kemend, "\n")] = '\0';
}
