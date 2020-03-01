
# Libft

C Library created by re-implementing some standard functions from the Standard C Library
**Plus:** some addition functions that will be helpful with future projects

## Table of Contents
* [Installation](#installation)
* [Usage](#usage)
* [API](#api)

## Installation

```bash
git clone git@github.com:coltonehrman/42sv_libft.git [LIB_NAME]
```

## Usage

```bash
make re
```

Will re-compile and remove object files, leaving the `libft.a` archive file which can be compiled together with your code.

## API

 * [ft_atoi](#ft_atoi)
 * [ft_bzero]()
 * [ft_count_char]()
 * [ft_count_digits]()
 * [ft_count_till]()
 * [ft_count_words]()
 * [ft_int_overflow]()
 * [ft_isalnum]()
 * [ft_isalpha]()
 * [ft_isascii]()
 * [ft_isdigit]()
 * [ft_islower]()
 * [ft_isprint]()
 * [ft_isspace]()
 * [ft_isupper]()
 * [ft_iswhitespace]()
 * [ft_itoa]()
 * [ft_lstadd]()
 * [ft_lstdel]()
 * [ft_lstdelone]()
 * [ft_lstiter]()
 * [ft_lstmap]()
 * [ft_lstnew]()
 * [ft_memalloc]()
 * [ft_memccpy]()
 * [ft_memchr]()
 * [ft_memcmp]()
 * [ft_memcpy]()
 * [ft_memdel]()
 * [ft_memmove]()
 * [ft_memset]()
 * [ft_putchar]()
 * [ft_putchar_fd]()
 * [ft_putendl]()
 * [ft_putendl_fd]()
 * [ft_putnbr]()
 * [ft_putnbr_fd]()
 * [ft_putstr]()
 * [ft_putstr_fd]()
 * [ft_strcat]()
 * [ft_strchr]()
 * [ft_strclr]()
 * [ft_strcmp]()
 * [ft_strcpy]()
 * [ft_strdel]()
 * [ft_strdup]()
 * [ft_strequ]()
 * [ft_striter]()
 * [ft_striteri]()
 * [ft_strjoin]()
 * [ft_strlcat]()
 * [ft_strlcpy]()
 * [ft_strlen]()
 * [ft_strmap]()
 * [ft_strmapi]()
 * [ft_strmatch]()
 * [ft_strncat]()
 * [ft_strncmp]()
 * [ft_strncpy]()
 * [ft_strnequ]()
 * [ft_strnew]()
 * [ft_strnstr]()
 * [ft_strrchr]()
 * [ft_strsplit]()
 * [ft_strstr]()
 * [ft_strsub]()
 * [ft_strtrim]()
 * [ft_tolower]()
 * [ft_toupper]()

### ft_atoi
[API](#api)

*prototype*
```c
int		ft_atoi(const char *str)
```

*definition*
```
converts initial portion of |*str| to (int) representation

does not account for any (int) overflows during conversion
```

*return*
```
converted (int) representation of |*str|
```

### ft_bzero
[API](#api)

*prototype*
```c
void	ft_bzero(void *s, size_t n)
```

*definition*
```
zeroes out memory pointed to by |*s| for |n| number of times
```

*return*
```
(void)
```
