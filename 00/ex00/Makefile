# the compiler: gcc for C program, define as g++ for C++
CPP = clang++
 
# compiler flags:
#  -Wall  - this flag is used to turn on most compiler warnings
#  - Wextra - this flag is used to enables some extra warning flags that are not enabled by -Wall
#  - Werror - every warning is treated as an error.
CPPFLAGS  = -Wall -Wextra -Werror
 
# The build target
TARGET = megaphone
 
all: $(TARGET)
 
$(TARGET): $(TARGET).cpp
	@$(CPP) $(CPPFLAGS) -o $(TARGET) $(TARGET).cpp
 
clean:
	@rm $(TARGET)
