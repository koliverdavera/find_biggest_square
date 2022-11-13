/*
** EPITECH PROJECT, 2022
** mem_alloc_2d_array.c
** File description:
** allocate memeory for map array for BSQ project
*/

#include <stdlib.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **result = calloc(sizeof(char *), nb_rows + 1);
    for (int i = 0; i < nb_rows; i++)
        result[i] = calloc(sizeof(char), nb_cols + 1);
    return result;
}
