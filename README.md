 *This project has been created as part of the 42 curriculum by spitte*

# ft_printf

## Description

Re-implementation of the printf function. this one only handles the conversions cspdiuxX%.

## Instructions

### Building Program

From the Printf directory, type make to create the library.
Other make functions include:
- make clean : delete the output files.
- make fclean : remove both the output files and the compiled library.
- make re : Deletes the output files and compiled library before recompiling.

### Using Program

> #include <ft_printf.h>
>
>       int ft_printf(const char *format, ...);

formats consists of '%' followed by one of the following letters:

- c for a single character
- s for a string
- p for a pointer
- d for a decimal number
- i for a decimal integer
- u for a unsigned decimal number 
- x for a hexadecimal lowercase format
- X for a hexadecimal uppercase format
- % for a percent sign

## Resources used

- **mandb**
- **geeksforgeeks.com**
- **cprogramming.com**

No AI was used whatsoever.







