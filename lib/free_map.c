/*
** EPITECH PROJECT, 2022
** free_map.c
** File description:
** Free memory allocated for map BSQ project
*/

#include <stdlib.h>
#include "../include/my.h"

void free_map(my_map *map)
{
    free(map->content);
    for (int i = 0; i < map->nb_rows; i++) {
        free(map->result[i]);
        free(map->init[i]);
    }
    free(map->result);
    free(map->init);
    free(map);
}
