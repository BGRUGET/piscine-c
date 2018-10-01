SRCDIR= ./srcs/
INCDIR= ./include/
FILES= algo.c main.c recup.c read.c
SRC= $(addprefix $(SRCDIR),$(FILES))
OBJ= $(FILES:.c=.o)
NAME= bsq
CFLAGS= -Wall -Wextra -Werror
CC= gcc
all: $(NAME)
$(NAME):
	$(CC) -I $(INCDIR) -c $(SRC) $(CFLAGS)
	$(CC) -o $(NAME) $(OBJ)

clean : 
	/bin/rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
