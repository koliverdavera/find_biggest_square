/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Get the lenght of the string
*/

int my_strlen(char const *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return (counter);
}
