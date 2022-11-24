/*
** EPITECH PROJECT, 2022
** map_helpers.c
** File description:
** helping fucntions to work with map structures
*/

#include "../include/my.h"
#include <stdlib.h>

int get_rows(my_map *map)
{
    int result = 0;
    for (int i = 0; map->content[i] != '\n'; i++) {
        char digit = map->content[i];
        if (48 <= digit && digit <= 57)
            result = result * 10 + (digit - 48);
        else {
            my_putstr("First line of input file is incorrect\n");
            exit(84);
        }
    }
    map->nb_rows = result;
    return result;
}

int get_cols(my_map *map)
{
    int i = 1;
    while (map->content[i - 1] != '\n')
        i++;
    int result = 0;
    while (map->content[i] != '\n') {
        result++;
        i++;
    }
    map->nb_cols = result;
    return result;
}
