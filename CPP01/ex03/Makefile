NAME = classWeapon

################################################################################

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

################################################################################

HEADERS_DIR	=	header
SRCS_DIR	=	srcs
OBJS_DIR	=	objs

################################################################################

CC =		c++
RM =		rm -rf
CFLAGS =	-Wall -Wextra -Werror -g3 -I$(HEADERS_DIR) -std=c++98
################################################################################

_RED		=	\033[31m
_GREEN		=	\033[32m
_YELLOW		=	\033[33m
_CYAN		=	\033[96m

################################################################################

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

################################################################################

all:	init_dir init_name $(NAME)

################################################################################

init_dir:
		@ $(shell mkdir -p $(OBJS_DIR))

init_name:
		if test -f $(NAME);\
		then echo "$(_CYAN)[$(NAME) program already created]";\
		else echo "$(_YELLOW)[Initialize program]";\
		fi

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
				@ echo "\t$(_YELLOW) compiling... $*.cpp"
				$(CC) $(CFLAGS) -c $< -o $@

################################################################################

$(NAME):	$(OBJS)
			echo "\t$(_YELLOW)[Creating $(NAME) program]"
					$(CC) $(OBJS) -o $(NAME)
					echo "$(_GREEN)[$(NAME) program created & ready]"

################################################################################

clean:
		echo "$(_RED)[cleaning up .out & objects files]"
		$(RM) $(OBJS) $(OBJS_DIR)

fclean:		clean
			echo "$(_RED)[cleaning up .out, objects & library files]"
			$(RM) $(NAME)

re:		fclean all

################################################################################


.SILENT:
		all

.PHONY: clean all fclean re