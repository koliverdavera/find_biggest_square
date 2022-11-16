/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_nbr_len(long long int n)
{
    long int count = 0;
    if (n < 0) {
        count = 1;
        n *= -1;
    }
    do {
        n /= 10;
        count++;
    } while (n != 0);
    return count;
}

int my_put_nbr(long long int nb)
{
    long int len = my_nbr_len(nb);
    long long int temp;
    if (nb < 0) {
        my_putchar('-');
        nb = -1 * nb;
    }
    if (nb > 9) {
        temp = nb / 10;
        nb = nb - 10 *temp;
        my_put_nbr(temp);
    }
    my_putchar(nb + '0');
    return len;
}
