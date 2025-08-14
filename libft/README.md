# libft

A custom implementation of key functions from the C standard library, developed as the first project of the **42 Common Core** at 42Porto.

The goal of this project is to reimplement essential C library functions from scratch, gaining a deep understanding of memory management, pointers, and basic algorithms.

---

## 📚 Project Overview

In this project, I recreated a set of standard library functions (like `strlen`, `strcpy`, `memset`, etc.) and built additional utility functions to be reused in future 42 projects.

All functions are implemented in C and organized in a static library (`libft.a`), which can be linked to other programs.

---

## 📂 Repository Structure

ibft/
├── src/ # Source files (.c)
├── includes/ # Header files (libft.h)
├── Makefile # Compilation rules
└── README.md # Project documentation

---

## 🛠️ Functions Implemented

### Part 1 — Standard C Library Functions
Reimplementations of functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>` such as:
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`
- `ft_strnstr`, `ft_atoi`

### Part 2 — Additional Utility Functions
Extra functions not found in the standard library:
- `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Part
Linked list functions:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

---

## ⚙️ Compilation & Usage

Clone the repository:
```bash
git clone https://github.com/joaoricteixeira/42CommonCore.git
cd 42CommonCore/libft

Compile the library:

make

This will produce libft.a — a static library you can link with your C programs:

gcc my_program.c -L. -lft -o my_program

```
---

## 📏 Project Rules (42 Guidelines)

    No usage of external libraries (only functions allowed by the subject)

    No memory leaks

    Functions must follow 42’s Norm rules

    Code must be modular and reusable

---

## 🧪 Testing

You can use third-party testers to verify your libft implementation:

    Libft War Machine

    Libft Tester

---

## 📜 License

This project is part of the 42 Common Core curriculum and is for educational purposes only.
Please respect the 42 Network’s guidelines and do not copy for submission.

---

## ✍️ Author

João Ricardo Teixeira
42Porto Cadet | Passionate about low-level programming and problem-solving
GitHub: joaoricteixeira
