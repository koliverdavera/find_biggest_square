/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main file for bsq project
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int bsq(char *filepath)
{
    my_map *map = init_map(filepath);
    if (map == NULL)
        return 84;
    process_map(map);
    show_result(map);
    free_map(map);
    return 0;
}

int generate_bsq(char *size_str, char *pattern)
{
    my_map *map = generate_map_init(size_str, pattern);
    if (map == NULL)
        return 84;
    process_map(map);
    show_result(map);
    free_map(map);
    return 0;
}
