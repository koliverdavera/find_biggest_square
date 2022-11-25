/*
** EPITECH PROJECT, 2022
** display_map.c
** File description:
** Display map for bsq project.c
*/

#include "../include/my.h"

void display_map_chars(my_map *map)
{
    for (int i = 0; i < map->nb_rows; i++) {
        for (int j = 0; j < map->nb_cols; j++) {
            my_putchar(map->init[i][j]);
        }
        my_putchar('\n');
    }
}
