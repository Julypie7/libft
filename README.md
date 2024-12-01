# Comon Core42 - Libft
Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

## List of Fucntions

### Functions from <ctype.h>

 1. ft_isalpha - checks for an alphabetic character.
 2. ft_isdigit - check for a digit (0 through 9).
 3. ft_isalnum - checks for an alphanumeric character.
 4. ft_isascii - checks whether c fits into the ASCII character set.
 5. ft_isprint - checks for any printable character.
 6. ft_toupper - convert char to uppercase.
 7. ft_tolower - convert char to lowercase.
### Functions from <string.h>

 8. ft_strlen - calculate the length of a string.
 9. ft_memset - fill memory with a constant byte.
 10. ft_bzero - zero a byte string.
 11. ft_memcpy - copy memory area.
 12. ft_memmove - copy memory area.
 13. ft_strlcpy - copy string to a specific size.
 14. ft_strlcat - concatenate a string to a specific size.
 15. ft_strchr - locate character in a string.
 16. ft_strrchr - locate character in a string.
 17. ft_strncmp - compare two strings.
 18.ft_memchr - scan memory for a character.
 19. ft_memcmp - compare memory areas.
 20. ft_strnstr - locate a substring in a string.
 21. ft_strdup - creates a duplicate for the string passed as a parameter.
### Functions from <stdlib.h>

 22. ft_atoi - convert a string to an integer.
 23. ft_calloc - allocates memory and sets its bytes' values to 0.
### Non-standard functions

 24. ft_substr - returns a substring from a string.
 25.  ft_strjoin - concatenates two strings.
 26. ft_strtrim - trims the beginning and end of a string with a specific set of chars.
 27. ft_split - splits a string using a char as parameter.
 28. ft_itoa - converts a number into a string.
 29. ft_strmapi - applies a function to each character of a string.
 30. ft_striteri - applies a function to each character of a string.
 31. ft_putchar_fd - output a char to a file descriptor.
 32. ft_putstr_fd - output a string to a file descriptor.
 33. ft_putendl_fd - output a string to a file descriptor, followed by a new line.
 34. ft_putnbr_fd - output a number to a file descriptor.
