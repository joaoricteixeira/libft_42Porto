# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

# Directories
SRC_DIR = src
BONUS_DIR = bonus
OBJ_DIR = obj

# Library
NAME = libft.a

# Source and object files
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

BONUS_SRC = $(wildcard $(BONUS_DIR)/*.c)
BONUS_OBJ = $(BONUS_SRC:$(BONUS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Colors for tests
GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m

# Build Library
all: $(NAME)

# Create object directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compile source objects
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compile bonus objects
$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Build library (mandatory)
$(NAME): $(OBJ)
	ar rcs $@ $^

# Build library with bonus objects
bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $^

# Clean object files
clean:
	rm -rf $(OBJ_DIR)

# Full clean (objects + library)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Run tests (optional, not required by Francinette)
tests: $(NAME) | $(OBJ_DIR)
	@echo "Running tests..."
	@for test in $(wildcard tests/*.c); do \
		bin=$(OBJ_DIR)/$$(basename $$test .c).out; \
		echo "Compiling $$test -> $$bin"; \
		$(CC) $(CFLAGS) $$test $(NAME) -o $$bin; \
		echo -n "Running $$bin... "; \
		./$$bin && echo -e "$(GREEN)[PASS]$(NC)" || echo -e "$(RED)[FAIL]$(NC)"; \
	done

.PHONY: all clean fclean re bonus tests
