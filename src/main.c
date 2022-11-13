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
    int row = args[2][0] - 48;
    int col = args[3][0] - 48;
//    int square_size = args[4][0] - 48;
//    int check = is_square_of_size(map, row, col, square_size);
//      printf("At position %d, %d square of size %d detected: %d\n", row, col, square_size, check);
    int square = find_biggest_square(map, row, col);
    printf("At position %d and %d the biggest size is %d\n", row, col, square);
    show_map_object(map, 0, 1, 0);
    free(map);
}
