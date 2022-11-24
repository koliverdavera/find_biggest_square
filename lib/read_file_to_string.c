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
#include "../include/my.h"

char *read_file_to_string(char const *filepath)
{
    struct stat st;
    stat(filepath, &st);
    int size = st.st_size;
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstr("An error occured while reading the file\n");
        exit(84);
    }
    char *content = malloc(sizeof(char) * (size + 1));
    size = read(fd, content, size);
    content[size] = '\0';
    return content;
}
