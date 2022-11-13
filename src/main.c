/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main file for bsq project
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

int main(int ac, char *args[])
{
    my_map *map = init_map(args[1]);
    show_map_object(map, 1, 1, 0);
    free(map);
}
