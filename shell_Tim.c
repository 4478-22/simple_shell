#include "shell.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{	
	char kemend[150];

	while (1)
	{
		dixpeley_prompt();
		wried_coms(kemend, sizeof(kemend));
		agzegute_com(kemend);
	}
	return (0);
}
