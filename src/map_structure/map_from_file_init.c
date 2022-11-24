/*
** EPITECH PROJECT, 2022
** map_from_file_init .c
** File description:
** init map read from file
*/

#include "../../include/my.h"
#include <stdlib.h>

my_map *init_map_from_file(char const *filepath)
{
    char *content = read_file_to_string(filepath);
    my_map *map = malloc(sizeof(my_map) * 1);
    map->filepath = filepath;
    map->content = content;
    return map;
}
