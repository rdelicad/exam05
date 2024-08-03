CXX = c++
CXXFLAG = -Wall -Wextra -Werror -I./include
NAME = a.out
SRC =	ASpell.cpp ATarget.cpp \
		Dummy.cpp Fwoosh.cpp \
		main.cpp Warlock.cpp 
#SRCS = $(addprefix src/, $(SRC))
OBJS = $(addprefix obj/, $(SRC:.cpp=.o))
all: $(NAME)
create_obj:
	@mkdir -p obj
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAG) -o $@ $^
$(OBJS): obj/%.o: %.cpp | create_obj
	$(CXX) $(CXXFLAG) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
	rm -rf obj
	rm -rf *.dSYM
	rm -f .DS_Store
re: fclean all
.PHONY: all clean fclean