all: program

program: main.c data.c parse.c parse_helpers.c find.c def_funk.c header.h print_any.c print_lib.c str_lib.c num_lib.c
	cc -Wall -Wextra -Werror main.c data.c parse.c parse_helpers.c find.c def_funk.c print_any.c print_lib.c str_lib.c num_lib.c -o rush-02
clean:
	rm -f *.o program
fclean:
	rm -f *.o
