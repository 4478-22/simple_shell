#include "shell.h"

/**
 * agzegute_com - Execute a command with provided arguments
 *
 * @kemend - Array of command arguments
 */

void agzegute_com(char **kemend)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		const int ced_arg = 150;
		char **lom = malloc(ced_arg * sizeof(char *));
		char *tims_env[] = {NULL};
		int nk_count = 0;
		int a;

		for (a = 0; kemend[i] != NULL && nk_count < ced_arg -1; a++)
		{
			lom[nk_count++] = kemend[a];
		}
		lom[nk_count] = NULL;

		if (execve(lom[0], lom, tims_env) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}

		free(lom);  /*Free the dynamically allocated array*/
	}
	else
	{
		wait(NULL);
	}
}
