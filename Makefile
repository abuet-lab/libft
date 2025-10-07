NAME = libft

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c\
	  ft_memcpy.c 	ft_memmove.c	ft_memset.c		ft_strlcat.c 	ft_strlcpy.c 	ft_strlen.c\
	  ft_toupper.c 	


OBJ = $(SRC:.c=.o)

all : $(NAME) 

$(NAME) :  $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
