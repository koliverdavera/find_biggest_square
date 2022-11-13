/*
** EPITECH PROJECT, 2022
** my .c
** File description:
** 
*/

#include <unistd.h>
#include "../include/my.h"

void display_map(char **map, int nb_rows, int nb_cols)
{
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols; j++) {
            my_putchar(map[i][j]);
        }
        my_putchar('\n');
    }
}
