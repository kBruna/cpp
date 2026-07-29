NAME	= megaphone
CPP		= c++
CFLAGS	= -Wall -Werror -Wextra

SRCS	= megaphone.cpp

all: $(NAME)

$(NAME) :
	@echo "Compiling..."
	@$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Program '$(NAME)' Compiled!"

clean:
	@rm -fr $(NAME)
	@echo "OBJ cleaned"

fclean:
	@rm -f $(NAME)
	@echo "OBJS cleaned"

re: fclean all

.PHONY: all clean fclean re
