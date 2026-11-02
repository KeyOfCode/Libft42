> *This project has been created as part of the 42 curriculum by darismen.*

# Libft

## Description

**Libft** is a custom C library developed as part of the 42 curriculum. It recreates commonly used functions from the C standard library and provides additional utilities for string manipulation, memory management, linked lists, formatted output, and file reading.

## Features

- Character classification and conversion
- String manipulation
- Memory management
- Integer conversion
- Linked-list operations
- File descriptor output functions
- `ft_printf`
- `get_next_line`

## Installation

Clone the repository:

```bash
git clone git@github.com:KeyOfCode/Libft42.git libft
cd libft
```

Compile the library:

```bash
make
```

This generates:

```text
libft.a
```

## Usage

Include the header in your source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc main.c -I./includes -L. -lft
```

## Makefile Commands

| Command | Description |
|---|---|
| `make` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Rebuild the library |

## Library Components

### Character Functions

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_tolower`
- `ft_toupper`

### String Functions

- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strlcpy`
- `ft_strlcat`

### Memory Functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`

### Linked Lists

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

### Additional Utilities

- `ft_atoi`
- `ft_itoa`
- `ft_chrrmv`

### `ft_printf`

- `ft_printf_fd`
- `ft_printf`
- `ft_putchar`
- `ft_putstr`
- `ft_putsigned_fd`
- `ft_puthex_fd`
- `ft_putptr_fd`
- `ft_putnbr_base_fd`
- `ft_num_len`

Supported formatting includes decimal, hexadecimal, unsigned values, characters, strings, pointers, and percent signs.

### `get_next_line`

- `get_next_line`
- `newline`
- `found_newline`

`get_next_line` reads and returns one line at a time from a file descriptor. The default `BUFFER_SIZE` is `8` and can be overridden during compilation:

```bash
cc -D BUFFER_SIZE=42 ...
```

## Resources

- [C documentation](https://man7.org/linux/man-pages/)
