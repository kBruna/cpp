NAME	= phonebook
CPP		= c++
CFLAGS	= -Wall -Werror -Wextra --std=c++98

SRCS =	Contact.cpp	\
		PhoneBook.cpp

OBJ_DIR = obj

OBJS	= $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CFLAGS) $(OBJS) -o $@
	@echo "Program Compiled!"

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling..."
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@rm -fr $(OBJ_DIR)
	@echo "Cleaning OBJS..."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning Program..."

re: fclean all

.PHONY: all clean fclean re
