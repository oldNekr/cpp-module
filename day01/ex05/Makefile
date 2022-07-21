# Color Aliases
DEFAULT	= \033[0;39m
GREEN	= \033[0;92m
BLUE	= \033[0;94m
CYAN	= \033[0;96m
RED		= \033[0;91m

# Make variables
CC			= c++
FLAGS		= -Wextra -Werror -Wall
CPP_FLAG	= -std=c++98
OPT_FLAG	= -O2
RM			= rm -rf

NAME = Harl
HDRS_LIST = Harl
SRCS_LIST = main Harl

SRC = $(addsuffix .cpp, $(SRCS_LIST)) \

HDR = $(addsuffix .hpp, $(HDRS_LIST)) \

OBJ = $(SRC:%.cpp=%.o)

# Make Commands
all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	@printf "\n$(BLUE)Compiling $(NAME)...$(DEFAULT)"
	@$(CC) $(FLAGS) $(CPP_FLAG) $(OPT_FLAG) $(SRC) -o $(NAME)
	@printf "\n$(GREEN)Ready!\n$(DEFAULT)"

%.o:	%.cpp
	@printf "$(BLUE)Generation $(CYAN)%-33.33s\r$(DEFAULT)" $@
	@$(CC) $(FLAGS) $(FLAGS_CPP) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@printf "$(RED)Cleaning up object files in $(NAME)...$(DEFAULT)\n"

fclean:		clean
	@$(RM) $(NAME)
	@printf "$(RED)Removed $(NAME)$(DEFAULT)\n"

re:			fclean all

.PHONY:	all clean fclean re