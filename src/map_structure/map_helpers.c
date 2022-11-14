/*
** EPITECH PROJECT, 2022
** map_helpers.c
** File description:
** helping fucntions to work with map structures
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

int get_rows(my_map *map)
{
    int result = 0;
    for (int i = 0; map->content[i] != '\n'; i++) {
        char digit = map->content[i];
        if (48 <= digit && digit <= 57)
            result = result * 10 + (digit - 48);
        else {
            printf("First line of input file is incorrect\n");
            exit(84);
        }
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

void free_map(my_map *map)
{
    free(map->content);
    free(map->map_result);
    free(map);
}

void show_map_object(my_map *map, int info, int map_init, int map_result)
{
    if (map == NULL)
        return;
    if (info == 1) {
        printf("nb_rows = %d, nb_cols = %d\n", map->nb_rows, map->nb_cols);
    }
    if (map_init == 1) {
        printf("Map content is:\n%sMap object:\n\t", map->content);
    }
    if (map_result == 1)
        display_map(map->map_result, map->nb_rows, map->nb_cols);
}

void show_result(my_map *map)
{
    show_map_object(map, 0, 0, 1);
}
