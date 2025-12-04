#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

/* Add other function prototypes here */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif

