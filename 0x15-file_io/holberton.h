#ifndef HOLBERTON_H
#define HOLBERTON_H

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void write_text(int file_d, char *buffer, const char *filename, ssize_t size);
ssize_t read_text(int file_d, char *buffer, const char *filename);
void error(int exit_n, const char *filename, int fd);

#endif
