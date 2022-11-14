/*
** EPITECH PROJECT, 2022
** read_file_to_string.c
** File description:
** load file to string for BSQ project
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char *read_file_to_string(char const *filepath)
{
    char *buffer = 0;
    long length;
    FILE *f = fopen(filepath, "rb");
    if (f) {
        fseek(f, 0, SEEK_END);
        length = ftell(f);
        fseek(f, 0, SEEK_SET);
        buffer = calloc(sizeof(char), length);
        if (buffer) {
            fread(buffer, 1, length, f);
        }
        fclose(f);
    }
    if (buffer == NULL) {
        printf("An error occured while reading the file %s\n", filepath);
        exit(84);
    }
    return buffer;
}

/*
char *read_file_to_string_open(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -2)
        return NULL;
    int buf_size = 29999;
    char *content = calloc(sizeof(char), buf_size);
    int size;
    do {
        size = read(fd, content, buf_size);
    } while (size > -1);
}
*/
