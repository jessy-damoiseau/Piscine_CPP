################################################################################
#                               Filename output                                #
################################################################################

NAME		=	iter

################################################################################
#                         Sources and objects directories                      #
################################################################################

SRCS_DIR	=	.
OBJS_DIR	=	objs

################################################################################
#                               Sources filenames                              #
################################################################################

SRCS		=	main.cpp

################################################################################
#                              Commands and arguments                          #
################################################################################

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g3 -std=c++98
RM			=	rm -rf

################################################################################
#                                 Defining colors                              #
################################################################################

_RED		=	\033[31m
_GREEN		=	\033[32m
_YELLOW		=	\033[33m
_CYAN		=	\033[96m
_NC			=	\033[0m

################################################################################
#                                  Compiling                                   #
################################################################################

OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all:	init $(NAME)

init:
		@ if test -f $(NAME);\
		then echo "$(_CYAN)[program already created]$(_NC)";\
		else echo "$(_YELLOW)[Initialize program]$(_NC)";\
		fi
		$(shell mkdir -p $(OBJS_DIR))

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
				@ echo "\t$(_YELLOW) compiling... $*.cpp$(_NC)"
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@ echo "\t$(_YELLOW)[Creating program]$(_NC)"
			$(CC) $(OBJS) -o $(NAME)
			@ echo "$(_GREEN)[program created & ready]$(_NC)"

clean:
		echo "$(_RED)[cleaning up .out & objects files]"
		$(RM) $(OBJS) $(OBJS_DIR)

fclean: clean
		@ echo "$(_RED)[cleaning up .out, objects & library files]$(_NC)"
		$(RM) $(NAME)

re:	fclean all

.SILENT:
		all
.PHONY: all clean fclean re bonus