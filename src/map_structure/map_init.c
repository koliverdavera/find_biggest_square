/*
** EPITECH PROJECT, 2022
** map_init.c
** File description:
** map structure methods for BSQ project
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../../include/my.h"
#include <stdio.h>

int get_rows(my_map *map)
{
    int result = 0;
    for (int i = 0; map->content[i] != '\n'; i++) {
        char digit = map->content[i];
        if (48 <= digit && digit <= 57)
            result = result * 10 + (digit - 48);
        else
            return -1;
    }
    map->nb_rows = result;
    return result;
}

int get_cols(my_map *map)
{
    int i = 0;
    while (map->content[i - 1] != '\n')
        i++;
    int nb_cols = 0;
    while (map->content[i] != '\n') {
        nb_cols++;
        i++;
    }
    map->nb_cols = nb_cols;
    return nb_cols;
}

char **get_map_init(my_map *map)
{
    int start = 0;
    while (map->content[start - 1] != '\n')
        start++;
    map->map_init = mem_alloc_2d_array(map->nb_rows, map->nb_cols);
    map->map_result = mem_alloc_2d_array(map->nb_rows, map->nb_cols);
    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++) {
            int position = start + i * (map->nb_cols + 1) + j;
            map->map_init[i][j] = map->content[position];
            map->map_result[i][j] = map->content[position];
        }
    }
    return map->map_init;
}

int parse(my_map *map)
{
    int rows = get_rows(map);
    if (rows == -1)
        return -1;
    get_cols(map);
    get_map_init(map);
    return 1;
}

my_map *init_map(char const *filepath)
{
    char *content = read_file_to_string(filepath);
    if (content == NULL)
        return NULL;
    my_map *map = calloc(sizeof(my_map), 1);
    map->filepath = filepath;
    map->content = content;
    parse(map);
    return map;
}
