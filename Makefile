# Create a (generic) Makefile to build your C++ project
CC = g++
TARGET = main
SRCS = main.cpp workshop.cpp
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Wextra -std=c++17
LINKFLAGS=
YELLOW = \033[0;33m
PURPLE = \033[1;35m
WHITE = \033[0m

all : $(TARGET)
$(TARGET): $(OBJS)
	@echo "$(PURPLE) Linking $(OBJS) into $(TARGET) $(WHITE)"
	@$(CC) $(CXXFLAGS) $(OBJS) -o $(TARGET)
	@./$(TARGET)

%.o : %.cpp
	@echo "$(YELLOW) Compiling $< --> $@"
	@$(CC) $(CXXFLAGS) -c $< -o $@

%.o: %.cpp %.h
	@echo "$(YELLOW) Compiling $^ --> $@"
	@$(CC) $(CXXFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	@rm -rf *.o $(TARGET)
