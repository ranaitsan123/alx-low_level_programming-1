#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: aicha lahnite
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x15-file_io directory.
 */

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *src, const char *dest);

#endif 
