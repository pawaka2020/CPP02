CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
EXTRAFLAGS = -std=c++98
MEMCHECK = -fsanitize=address
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = a.out

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(EXTRAFLAGS) $(MEMCHECK) $(OBJS) -o $(TARGET)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

t: re
	./$(TARGET)