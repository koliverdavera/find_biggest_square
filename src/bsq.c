/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main file for bsq project
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int bsq(char *filepath)
{
    my_map *map = init_map(filepath);
    if (map == NULL)
        return 84;
    process_map(map);
    show_result(map);
    free(map);
    return 0;
}
