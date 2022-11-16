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
SRC		=	src/bsq.c	\
			src/map_structure/display_map.c	\
			src/map_structure/load_map.c	\
			src/map_structure/map_init.c	\
			src/map_structure/generate_map.c	\
			src/map_structure/map_helpers.c	\
			src/scan_squares/check_square.c	\
			src/scan_squares/find_biggest_square.c	\
			src/scan_squares/process_square.c	\
			lib/my_putchar.c	\
			lib/mem_alloc_2d_array.c	\
			lib/my_put_nbr.c	\
			lib/string_to_int.c	\
			lib/my_putstr.c	\
			lib/my_strlen.c

LIB		=	-L./ -lmy
OBJ		=	$(SRC:.c=.o)

NAME		=	bsq

UT_SRC		=	tests/easy_test.c	\
			tests/intermediate_test.c

UT_NAME		=	unit_tests

all:	$(NAME)

$(NAME): SRC += $(MAIN)
$(NAME): $(MAIN:.c=.o) $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIB)

tests_run:
	$(CC) -o $(UT_NAME) --coverage $(UT_SRC) $(SRC) -lcriterion
	./$(UT_NAME)

clean:
	$(RM) $(OBJ)
	$(RM) Makefile~
	$(RM) *.gcno
	$(RM) *.gcda
	$(RM) *.c~
	$(RM) *.c#

fclean:	clean
	$(RM) $(NAME_LIB)
	$(RM) $(NAME)
	$(RM) $(UT_NAME)
	$(RM) $(OBJ)

re:	fclean
	$(RM) $(OBJ)
	$(RM) src/bsq.o
	$(RM) src/main.o
