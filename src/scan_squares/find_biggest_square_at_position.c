/*
** EPITECH PROJECT, 2022
** my .c
** File description:
** 
*/

#include "../../include/my.h"
#include <stdio.h>

int find_biggest_square(my_map *map, int row, int col)
{
    int max_size = 0;
    while (is_square_of_size(map,row, col, max_size) == 1)
        max_size++;
    return max_size - 1;
}
