# Program name
NAME    	= violence

# Compiler options
CXX     = g++ 
CFLAGS  = -Wall -Wextra -Werror -std=c++98

DIR_OBJ = obj/

DIR_SRC = src/

# Colors
RESET_COLOR = \033[0m
BOLD = \033[1m
GREEN = \033[92m
BLUE = \033[94m

SRCS  = main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJ = $(patsubst $(DIR_SRC)%.cpp,$(DIR_OBJ)%.o,$(SRCS))

# Compiling project
$(NAME): $(OBJ)
		@echo "$(BOLD)$(BLUE)🛠️ 🚧     Compiling project...     🚧🛠️$(RESET_COLOR)"
		@echo "\n"
		@$(CXX) $(CFLAGS) -o $(NAME) $(OBJ)
		@echo "$(BOLD)$(GREEN)⚔️🪓🔫    violence ready to use    🔫🪓⚔️$(RESET_COLOR)"

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(DIR_OBJ)%.o: $(DIR_SRC)%.cpp | $(DIR_OBJ)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
		@echo "$(BOLD)$(BLUE)🧹🧼     Cleaning .o ...     🧼🧹$(RESET_COLOR)"
		@rm -rf $(DIR_OBJ)

fclean: clean
		@rm -rf $(NAME)
		@echo "\n"
		@echo "$(BOLD)$(GREEN)🧹🧼     Cleaning finished     🧼🧹$(RESET_COLOR)"

re: fclean all

.PHONY: all clean fclean re