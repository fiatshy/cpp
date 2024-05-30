TARGET = PhoneBook
CC	= c++
FLAGS = -Wall -Wextra -Werror -g
FLAG_BONUS = 0

H = $(addprefix -I, $(HEADER_DIR))
HEADER_DIR = ./includes/

SRCS_DIR = ./srcs/

SRCS_FILE = main.cpp \
			Contact.cpp \
			PhoneBook.cpp \


SRCS_LIST = $(SRCS_FILE) \

SRCS = $(addprefix $(SRCS_DIR), $(SRCS_LIST))

OBJS_DIR	= ./objs/
OBJS_LIST = $(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_LIST))

.PHONY: all clean fclean re bonus

all: $(TARGET)

$(TARGET): $(OBJS)
	@ $(CC) $(FLAGS) $(H) $^ -D BONUS=$(FLAG_BONUS) -o $@

$(OBJS_DIR)%.o: $(SRCS_DIR)%.cpp
	@ mkdir -p $(dir $@)
	@ $(CC) $(FLAGS) $(H) -c -o $@ $<

bonus:
	@ $(MAKE) all FLAG_BONUS=1

clean:
	@ rm -rf $(OBJS_DIR)

fclean: clean
	@ rm -f $(TARGET)

re: fclean all