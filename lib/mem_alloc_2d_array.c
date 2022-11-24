/*
** EPITECH PROJECT, 2022
** mem_alloc_2d_array.c
** File description:
** allocate memeory for map array for BSQ project
*/

#include <stdlib.h>

char **mem_alloc_2d_arr_char(int nb_rows, int nb_cols)
{
    char **result = malloc(sizeof(char *) * (nb_rows + 1));
    for (int i = 0; i < nb_rows; i++) {
        result[i] = malloc(sizeof(char) * (nb_cols + 1));
        result[i][nb_cols] = '\0';
    }
    result[nb_rows] = NULL;
    return result;
}

int **mem_alloc_2d_arr_int(int nb_rows, int nb_cols)
{
    int **result = malloc(sizeof(int *) * (nb_rows + 1));
    for (int i = 0; i < nb_rows; i++) {
        result[i] = malloc(sizeof(int) * (nb_cols + 1));
        result[i][nb_cols] = '\0';
    }
    result[nb_rows] = NULL;
    return result;
}
