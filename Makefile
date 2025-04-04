##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## for the compilation
##

SRC =   n_hashtab.c\
	d_hashtab.c\
	ht_dump.c\
	ht_delete.c\
	ht_insert.c\
	ht_search.c\
	hash_functions.c\
	my_strdup.c\
	my_put_nbr.c\
	my_strcpy.c\
	my_strcmp.c\

OBJ = $(SRC:.c=.o)

all : $(OBJ)
	ar rcs libhashtable.a *.o

tests_run :
	gcc -o unit_tests $(SRC) tests/test_secured.c\
	 --coverage -lcriterion
	./unit_tests

clean :
	rm -rf *.o
	rm -rf *~
	rm -rf *#
	rm -rf *.gcda
	rm -rf *.gcno

fclean : clean
	rm -rf a.out
	rm -rf libhashtable.a
	rm -rf unit_tests

re : fclean all
