NAME = run
SOURCES = main.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
DEBUG = #-fsanitize=address
CFLAGS = -Wall -Wextra -Werror -std=c++98 $(DEBUG)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(DEBUG) -o $@ $^

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

clean:
	$(RM) $(OBJECTS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

lint:
	cpplint --filter=-legal/copyright $(SOURCES)

.PHONY: all clean fclean re lint