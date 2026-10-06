# libft

![Language](https://img.shields.io/badge/language-C-blue)
![School](https://img.shields.io/badge/school-42-black)

My own C standard library: a re-implementation of common `libc` functions, plus additional utility functions for strings, memory and output. It is compiled into a static library, `libft.a`, that I reuse in my later C projects.

> First project of the [42 school](https://42.fr/) curriculum. Written in C without using the standard library (only `malloc`, `free` and `write` are allowed), following the 42 coding standard (the *Norm*).

---

## Contents

### Part 1 — libc functions

Re-implementations of standard functions, with the same behavior as the originals.

| Category              | Functions |
|-----------------------|-----------|
| Character checks      | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` |
| Character conversion  | `ft_toupper` `ft_tolower` |
| Strings               | `ft_strlen` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strlcpy` `ft_strlcat` `ft_strdup` |
| Memory                | `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc` |
| Conversion            | `ft_atoi` |

### Part 2 — Additional functions

Functions that are not in `libc` (or differ from it) but are useful for later projects.

| Function        | Description |
|-----------------|-------------|
| `ft_substr`     | Extracts a substring from a string |
| `ft_strjoin`    | Concatenates two strings into a new one |
| `ft_strtrim`    | Removes a given set of characters from both ends of a string |
| `ft_split`      | Splits a string into an array of words using a delimiter |
| `ft_itoa`       | Converts an integer to a string |
| `ft_strmapi`    | Applies a function to each character, creating a new string |
| `ft_striteri`   | Applies a function to each character in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd`  | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor |

## Build

```bash
git clone https://github.com/abuet-lab/libft.a.git
cd libft.a
make
```

This creates the static library `libft.a`.

| Rule          | Description |
|---------------|-------------|
| `make`        | Compiles the library |
| `make clean`  | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re`     | Rebuilds everything from scratch |

All files are compiled with `cc -Wall -Wextra -Werror`.

## Usage

Include the header and link the library when compiling your program:

```c
#include "libft.h"

int main(void)
{
    char **words;
    int  i;

    words = ft_split("hello from libft", ' ');
    i = 0;
    while (words[i])
    {
        ft_putendl_fd(words[i], 1);
        free(words[i]);
        i++;
    }
    free(words);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```

## What I learned

- How standard C functions work under the hood (memory overlap in `memmove`, size handling in `strlcpy`/`strlcat`, overflow in `calloc`…)
- Careful **dynamic memory management** and avoiding leaks, especially in functions like `ft_split`
- Writing a **Makefile** and building a **static library**
- Working with function pointers
- Writing clean, consistent code under strict style rules
