#  ************************************************************************** #
#                                                           LE - /            #
#                                                               /             #
#    Makefile                                         .::    .:/ .      .::   #
#                                                  +:+:+   +:    +:  +:+:+    #
#    By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     #
#                                                  #+#   #+    #+    #+#      #
#    Created: 2019/12/10 11:15:06 by rlossy       #+#   ##    ##    #+#       #
#    Updated: 2019/12/10 11:15:06 by rlossy      ###    #+. /#+    ###.fr     #
#                                                          /                  #
#                                                         /                   #
#  ************************************************************************** #

NAME		=	span

HEADER		=	./includes/
FILENAMES	=	main.cpp span.cpp

SOURCES		=	$(addprefix srcs/, $(FILENAMES))
OBJECTS		=	$(addprefix build/, $(FILENAMES:.cpp=.o))

FLAGS		=	-Wall -Wextra -Werror

LOADIR		=	../extra/Progress_Bar-for-Makefile
LOADF		=	$(LOADIR)/loading.sh

.PHONY: all clean fclean re


all: $(NAME)

clean:
	@echo "\033[31m"
	@sh $(LOADF) $(LOADIR) $@ r n $(NAME)
	@rm -rf build/
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $(NAME)⭃\t\tObject Files\t\033[0m\
	\033[1m⟿ \t\033[31mDeletion Success\033[0m ✅\n"

fclean: clean
	@echo "\033[31m"
	@sh $(LOADF) $(LOADIR) $@ r n $(NAME)
	@rm -f $(NAME)
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $(NAME)⭃\t\tCompiled Files\t\033[0m\
	\033[1m⟿ \t\033[31mDeletion Success\033[0m ✅\n"
re:
	@$(MAKE) fclean
	@$(MAKE) all

build:
	@echo "\033[35m"
	@mkdir build/

$(NAME): $(OBJECTS)
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\t\tObject Files\033[0m \
		\033[1m⟿ \t\033[32mCreation Success\033[0m ✅\n"
	@echo "\033[42m\033[30m"
	@sh $(LOADF) $(LOADIR) $@ e n $(NAME)
	@echo "\033[0m"
	@clang++ $(FLAGS) $(OBJECTS) -o $@
	@printf "\n\033[1m\033[34m\t\t\t\t⥷ $@⭃\t\tProject\t\t\033[0m \033[1m⟿  \
		\033[32mCreation Success\033[0m ✅\n"

build/%.o: srcs/%.cpp $(HEADER) | build
	@sh $(LOADF) $(LOADIR) $< o y
	@clang++ $(FLAGS) -c $< -o $@