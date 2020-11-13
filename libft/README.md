# <p align=center> Libft </p>

Creating my own library on C

### Re-code the following functions from standard C library:

- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower
- calloc
- strdup5

### Set of functions that are either not included in the libc, or included in a different form. 

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_putchar
- ft_putstr
- ft_putendl
- ft_putnbr

### And some additional function:

- ft_lstnew - Allocates (with malloc(3)) and returns a newelement.  The variable ’content’ is initializedwith the value of the parameter ’content’.  Thevariable ’next’ is initialized to NULL.

- ft_lstadd_front - Adds the element ’new’ at the beginning of thelist.

- t_lstsize - Counts the number of elements in a list.

- ft_lstlast - Returns the last element of the list.

- ft_lstadd_back - Adds the element ’new’ at the end of the list.

- ft_lstdelone - Takes as a parameter an element and frees thememory of the element’s content using the function’del’ given as a parameter and free the element.The memory of ’next’ must not be freed.

- ft_lstclear - Deletes and frees the given element and everysuccessor of that element, using the function ’del’and free(3).Finally, the pointer to the list must be set toNULL.

- ft_lstiter - Iterates the list ’lst’ and applies the function’f’ to the content of each element.

- ft_lstmap - Iterates the list ’lst’ and applies the function’f’ to the content of each element.  Creates a newlist resulting of the successive applications ofthe function ’f’.  The ’del’ function is used todelete the content of an element if needed.