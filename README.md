<h1 align="center">
	ft_printf
</h1>

<p align="center">
    <img src="https://github.com/riceset/riceset/blob/main/42_badges/ft_printfe.png" />
</p>

## Summary
> For the ft_printf project of the 42 school cursus,
> we must recreate the famous C library printf function.
> This project teaches us about variadic arguments as well
> as structures if we plan to implement printf's extra flags.

## Getting started

First, clone this repository and `cd` into it:

```zsh
$ git clone https://github.com/riceset/printf; cd ft_printf
```

Compile the library with:

```zsh
$ make
```

### Basic Usage
For example, let's create a ``main.c`` file.

```c
// Include the header
#include "ft_printf.h"

int main(void)
{
      // Call the function
      ft_printf("Hello %d!", 1);
      return (0);
}
```

Compile the ``main.c`` file with the ft_printf library and run the program:
```bash
gcc main.c libftprintf.a && ./a.out
```
Output should be:
```
Hello 1!
```

## Caveats

This version of `printf()` only supports the following conversions:

<table>
    <thead>
        <tr>
            <th colspan=3><h4>Specifiers</h4></th>
        </tr>
        <tr>
            <th>Format Specifier</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td align="center">%</td>
            <td>% followed by another % character writes % to the screen.</td>
        </tr>
        <tr>
            <td align="center">c</td>
            <td>writes a single character.</td>
        </tr>
        <tr>
            <td align="center">s</td>
            <td>writes a character string.</td>
        </tr>
        <tr>
            <td align="center">p</td>
            <td>writes an implementation-defined character sequence defining a pointer address.</td>
        </tr>
        <tr>
            <td align="center">d or i</td>
            <td>writes a signed integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">u</td>
            <td>writes an unsigned integer to decimal representation.</td>
        </tr>
        <tr>
            <td align="center">x or X</td>
            <td>writes an unsigned integer to hexadecimal representation.</td>
        </tr>
    </tbody>
</table>
