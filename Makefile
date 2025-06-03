##
## EPITECH PROJECT, 2024
## my_top.c
## File description:
## makefile
##

SRC	=	src/*.c	\
		command_files/*.c

BIN 	=	cesar

TESTS_FILES =	command_files/*.c\
		src/cesar.c

TESTS =	tests/*.c

$(BIN):	$(SRC)
	gcc -o $(BIN) $(SRC) -g3

all:	$(BIN)

clean:
	rm -f $(BIN)

unit_tests:
	gcc -o unit_tests $(TESTS) $(TESTS_FILES) -lcriterion --coverage

tests_run: unit_tests
	./unit_tests --verbose

fclean:	clean
	rm -f *~
	rm -f *#
	rm -f include/*~
	rm -f include/*#
	rm -f command_files/*~
	rm -f command_files/*#
	rm -f tests/*~
	rm -f tests/*#
	rm -f src/*~
	rm -f src/*#
	rm -f *.gcno
	rm -f *.gcda
	rm -f unit_tests

re:	fclean all
