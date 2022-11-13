/*
** EPITECH PROJECT, 2022
** map_helpers.c
** File description:
** helping fucntions to work with map structures
*/

#include "../../include/my.h"
#include <stdlib.h>
#include <stdio.h>

void free_map(my_map *map)
{
    free(map->content);
    free(map->map_init);
    free(map->map_result);
    free(map);
}

void show_map_object(my_map *map, int info, int map_init, int map_result)
{
    if (map == NULL)
        return;
    if (info == 1) {
        printf("Map content is:\n%s", map->content);
        printf("Map object:\n\tnb_rows = %d, nb_cols = %d\n", map->nb_rows, map->nb_cols);
    }
    if (map_init == 1) {
        printf("Map init is:\n");
        display_map(map->map_init, map->nb_rows, map->nb_cols);
    }
    if (map_result == 1)
        display_map(map->map_result, map->nb_rows, map->nb_cols);
}

void show_result(my_map *map)
{
    show_map_object(map, 0, 0, 1);
}
