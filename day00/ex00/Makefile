# Color Aliases
DEFAULT	= \033[0;39m
GREEN	= \033[0;92m
BLUE	= \033[0;94m
CYAN	= \033[0;96m
RED		= \033[0;91m

# Make variables
CC			= c++
FLAGS		= -Wextra -Werror -Wall
FLAGS_CPP	= -std=c++98

RM			= rm -rf

NAME = megaphone

SRC = $(addsuffix .cpp, $(NAME)) \

OBJ = $(SRC:%.cpp=%.o)

# Make Commands
all: $(NAME)

$(NAME): $(OBJ)
	@printf "\n$(BLUE)Compiling $(NAME)...$(DEFAULT)"
	@$(CC) $(FLAGS) $(CPP_FLAG) $(SRC) -o $(NAME)
	@printf "\n$(GREEN)Ready!\n$(DEFAULT)"

%.o:	%.cpp
	@printf "$(BLUE)Generation $(CYAN)%-33.33s\r$(DEFAULT)" $@
	@$(CC) $(FLAGS) $(CPP_FLAG) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(RED)Cleaning up object files in $(NAME)...$(DEFAULT)\n"

fclean:		clean
	@$(RM) $(NAME)
	@printf "$(RED)Removed $(NAME)$(DEFAULT)\n"

re:			fclean all

.PHONY:	all clean fclean re