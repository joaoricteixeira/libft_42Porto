# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

# Directories
SRC_DIR = src
TEST_DIR = tests
OBJ_DIR = obj

# Library
NAME = libft.a

# Source and object files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Test files
TESTS = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(TESTS:$(TEST_DIR)/%.c=$(OBJ_DIR)/%.o)
TEST_BIN = $(TESTS:$(TEST_DIR)/%.c=%.out)

# Default target
all: $(NAME)

# Create object directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compile libft objects
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build the library
$(NAME): $(OBJ)
	ar rcs $@ $^

# Clean object files
clean:
	rm -rf $(OBJ_DIR)

# Full clean (objects + library)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Colors
GREEN=\033[0;32m
RED=\033[0;31m
NC=\033[0m  # No color

.PHONY: all clean fclean re tests

tests: $(NAME) | $(OBJ_DIR)
	@echo "Running tests..."
	@for test in $(TESTS); do \
		bin=$(OBJ_DIR)/$$(basename $$test .c).out; \
		echo "Compiling $$test -> $$bin"; \
		$(CC) $(CFLAGS) $$test $(NAME) -o $$bin; \
		echo -n "Running $$bin... "; \
		./$$bin && echo -e "$(GREEN)[PASS]$(NC)" || echo -e "$(RED)[FAIL]$(NC)"; \
	done
