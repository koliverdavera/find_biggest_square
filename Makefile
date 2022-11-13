##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

CC		=	gcc
CPPFLAGS	=	-I include
MAIN		=	src/main.c
NAME_LIB	=	libmy.a
SRC		=	src/map_structure/display_map.c	\
			src/map_structure/load_map.c	\
			src/map_structure/map_init.c	\
			src/map_structure/map_helpers.c	\
			src/scan_squares/check_square_at_position.c	\
			src/scan_squares/find_biggest_square_at_position.c	\
			lib/my_putchar.c	\
			lib/mem_alloc_2d_array.c	\
			lib/my_nbr_len.c
LIB		=	-L./ -lmy
OBJ		=	$(SRC:.c=.o)

NAME		=	bsq

all:	$(NAME)

$(NAME): SRC += $(MAIN)
$(NAME): $(MAIN:.c=.o) $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIB)

clean:
	$(RM) $(OBJ)
	$(RM) Makefile~

fclean:	clean
	$(RM) $(NAME_LIB)
	$(RM) $(NAME)

re:	fclean
	$(RM) $(OBJ)
	$(RM) src/main.o
