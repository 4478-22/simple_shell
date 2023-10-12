#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

void cedy_print(const char *sez);
void agzegute_com(char **kemend);
void dixpeley_prompt(void);
void wried_coms(char *kemend, size_t size);

#endif
