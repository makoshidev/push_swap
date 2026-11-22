*This project has been created as part of the 42 curriculum by mshikhov.*

# Libft

## Description
Libft is the first foundational project in the 42 curriculum. The objective is to re-implement standard C library functions alongside essential utility functions and linked list structures. This custom static library serves as a core dependency for future C assignments.

## Library Overview

### Part 1 - Libc Functions
Standard C library functions re-implemented without external dependencies:
- ft_isalpha: Checks for an alphabetic character.
- ft_isdigit: Checks for a digit 0 through 9.
- ft_isalnum: Checks for an alphanumeric character.
- ft_isascii: Checks whether a character fits into the ASCII set.
- ft_isprint: Checks for any printable character.
- ft_strlen: Calculates the length of a string.
- ft_memset: Fills memory with a constant byte.
- ft_bzero: Erases data in memory by writing zeros.
- ft_memcpy: Copies a memory block.
- ft_memmove: Copies a memory block with handling for overlapping regions.
- ft_strlcpy: Copies a string to a size-bounded buffer.
- ft_strlcat: Concatenates a string to a size-bounded buffer.
- ft_toupper: Converts a character to uppercase.
- ft_tolower: Converts a character to lowercase.
- ft_strchr: Locates the first occurrence of a character in a string.
- ft_strrchr: Locates the last occurrence of a character in a string.
- ft_strncmp: Compares two strings up to a specified number of bytes.
- ft_memchr: Scans memory for a character.
- ft_memcmp: Compares two memory areas.
- ft_strnstr: Locates a substring in a string with a length limit.
- ft_atoi: Converts an ASCII string to an integer.
- ft_calloc: Allocates memory and initializes all bytes to zero.
- ft_strdup: Duplicates a string using dynamic memory allocation.

### Part 2 - Additional Functions
Utility functions for string allocation, transformation, and file descriptor outputs:
- ft_substr: Extracts a substring from a string.
- ft_strjoin: Concatenates two strings into a new dynamically allocated string.
- ft_strtrim: Trims specified characters from the start and end of a string.
- ft_split: Splits a string into an array of strings using a delimiter character.
- ft_itoa: Converts an integer into a null-terminated string.
- ft_strmapi: Applies a function to each character of a string to create a new string.
- ft_striteri: Applies a function to each character of a string by address.
- ft_putchar_fd: Outputs a character to a given file descriptor.
- ft_putstr_fd: Outputs a string to a given file descriptor.
- ft_putendl_fd: Outputs a string followed by a newline to a given file descriptor.
- ft_putnbr_fd: Outputs an integer to a given file descriptor.

### Part 3 - Linked List Functions
Data structure operations utilizing the t_list structure:
- ft_lstnew: Creates a new list element node.
- ft_lstadd_front: Adds a node at the beginning of a list.
- ft_lstsize: Counts the number of nodes in a list.
- ft_lstlast: Returns the last node of a list.
- ft_lstadd_back: Adds a node at the end of a list.
- ft_lstdelone: Frees the memory of a single node using a custom delete function.
- ft_lstclear: Deletes and frees a node and all subsequent nodes.
- ft_lstiter: Iterates through a list and applies a function to each node content.
- ft_lstmap: Applies a function to each node to construct a new list.

## Instructions

### Compilation
The library is compiled using the provided Makefile. Standard required rules:
- make / make all: Compiles source files and creates libft.a.
- make clean: Removes object files.
- make fclean: Removes object files and libft.a.
- make re: Re-compiles the entire project from scratch.

### Usage

Include the header in your C source code:

```c
#include "libft.h"
```

#### Compilation

1. If files are in the same directory:
```bash
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

2. If libft is in a subfolder (e.g., ./path/to/libft):
```bash
cc -Wall -Wextra -Werror -I path/to/libft main.c path/to/libft/libft.a -o my_program
```

## Resources

### References
- C Standard Library Manual Pages (man 3)
- GNU C Library and BSD String Library Documentation

### AI Usage
Artificial intelligence was used as a structural planner and task checklist manager to track completion of project sections. AI was not used to generate source code.