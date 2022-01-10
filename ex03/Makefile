CXXFLAGS	= -std=c++98 -pedantic -Wall -Werror -Wextra
CXX		= c++
NAME	= unnecessary_violence.out
OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f
SRCS	= Weapon.cpp \
		  HumanA.cpp \
		  HumanB.cpp \
		  main.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
