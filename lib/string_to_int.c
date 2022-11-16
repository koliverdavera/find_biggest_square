/*
** EPITECH PROJECT, 2022
** string_to_numb.c
** File description:
** string to numb for bsq project
*/

#include <stdio.h>

int string_to_int(char *line)
{
    int result = 0;
    for (int i = 0; 48 <= line[i] && line[i] <= 57; i++)
        result = result * 10 + (line[i] - 48);
    return result;
}
