# the compiler
CC = clang++
# compiler flags:
#  -Wall  - this flag is used to turn on most compiler warnings
#  - Wextra - this flag is used to enables some extra warning flags that are not enabled by -Wall
#  - Werror - every warning is treated as an error.
CCFLAGS  = -Wall -Wextra -Werror
# The build target
TARGET = test

SOURCES = test.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all: $(SOURCES) $(TARGET)
	
$(TARGET):$(OBJECTS)
	@$(CC) $(OBJECTS) -o $@

.cpp.o:
	@$(CC) $(CCFLAGS)  -c -o $@ $^

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm $(TARGET)

re: fclean all

.PHONY: all clean fclean re