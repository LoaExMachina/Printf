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

##  Structure and choices

A variadic argument was used in order to be able to pass a variable amount of arguments.
The function "dispatch", which treats every eventuality for the passed format, was separated from the main function to keep it under 25 lines.
I reused several functions from Libft, as well as the recursive putnbr_base which I'd created during the Piscine. I also made an alternate version of the later to manage unsigned ints.
The loop of the man program checks for each character of the string taken as first argument whether it is a "%" and whether it is followed by a letter corresponding to a supported format. If either is false, it simply writes the character. If, however, it is a valid format, then it calls the dispatch function to identify the format and write the correct caracter or string thanks to the appropriate helper function.

No AI was used whatsoever.







