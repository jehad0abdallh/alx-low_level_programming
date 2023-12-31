#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
/*for file*/
#include <sys/stat.h>
/*for in/out file*/
#include <fcntl.h>
#include <unistd.h>

#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error_file(int file_from, int file_to, char *argv[]);
#endif
