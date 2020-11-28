# <p align=center> Printf </p>

My own realization of standard C printf function (stdio.h).

Function implements `cspdiuxX%` specificators with `-`, `0`, and considers `width` + `precision` parameters.

For use:
`make` in the root of the repository to build library `libftprintf.a`, include `ft_printf.h` in program, compile program with this library.

Example of main.c:

```
#include "ft_printf.h"

int main(void) 
{
  ft_printf("%.7s%c%0*d\n", "Example foo bar", ' ', 8, 999);
  return 0;
}
```

compile and launch:

```
$> gcc main.c -L. -lftprintf -o a.out
$>./a.out
Example 00000999
```
