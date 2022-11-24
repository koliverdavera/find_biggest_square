/*
** EPITECH PROJECT, 2022
** map_generate_init.c
** File description:
** init map generated
*/

#include "../../include/my.h"
#include <stdlib.h>

my_map *map_generate_init(char *size, char *pattern)
{
    my_map *map = malloc(sizeof(my_map) * 1);
    map->pattern = pattern;
    map->nb_rows = string_to_int(size);
    map->nb_cols = string_to_int(size);
    generate_content(map, size);
    return map;
}
