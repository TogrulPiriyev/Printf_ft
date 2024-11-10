MY_VAR = this is a string

MY_OTHER_VAR = hello $(MY_VAR)

MY_OTHER_VAR += "Bye !"

NAME = my prog

MY_SOURCES = ft_putchar.c \
			main.c
MY_OBJECTS = $(MY_SOURCES:.c=.0)

CFLAGS += -Wall -Wextra -Werror

CUR_DIR = $(shell pwd)

my_rule: sub_rule 
	echo i will compile my files $(MY_SOURCES)
sub_rule:
	echo This is my rule, in $(CUR_DIR)
