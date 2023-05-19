CC = cc
CFLAGS =  -Wall -Werror -Wextra
AR = ar rc
RM = rm -f
TARGET = libft.a
SRCS = $(wildcard *.c)
OBJCS = $(SRCS:%.c=%.o)

$(TARGET): $(OBJCS)
	$(AR) $@ $^

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

clean:
	$(RM) $(OBJCS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY : all clean fclean re