#include "shell.h"

/**
 * agzegute_com - Execute a command with provided arguments
 *
 * @kemend - Array of command arguments
 */

void agzegute_com(char kemend[150])
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *lom[150];
		char *tims_env[] = {NULL};
		int nk_count = 0;
		char *tok = strtok(kemend, " ");
		
		while (tok != NULL && nk_count < 149)
		{
			lom[nk_count++] = tok;
			tok = strtok(NULL, " ");
		}
		lom[nk_count] = NULL;

		if (execve(lom[0], lom, tims_env) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
