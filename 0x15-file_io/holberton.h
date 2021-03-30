#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_files(const char *src_filename, const char *dest_filename);
void close_fd(int fd_src, int fd_dest);
#endif
