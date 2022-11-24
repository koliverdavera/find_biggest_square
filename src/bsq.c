/*
** EPITECH PROJECT, 2022
** bsq.c
** File description:
** two bsq functions for bsq project
*/

#include "../include/my.h"

int process_map(my_map *map)
{
    parse(map);
    browse(map);
    display_map_chars(map);
    free_map(map);
    return 0;
}

int bsq_from_file(char *filepath)
{
    my_map *map = init_map_from_file(filepath);
    return process_map(map);
}

int bsq_generate(char *size, char *pattern)
{
    my_map *map = map_generate_init(size, pattern);
    return process_map(map);
}
