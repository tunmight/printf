# Printf 

## Group Project

### Collaborators:
- <a href="https://github.com/Tunmight">Tunmight</a>
- <a href="https://github.com/GreenyNg">The Graphical Greeny</a>

## Files

### _printf.c
This code defines two functions: `check_format` and `_printf`. `check_format` takes a string argument `format`, which represents a possible valid format specifier for printf. It returns a pointer to a function that matches the format specifier, or `NULL` if no matching function is found.

The `check_format` function first initializes an array of structures called `p`. Each structure has two members: a string `t` representing a format specifier and a function pointer `f` that corresponds to the matching function.

Next, the function iterates through the `p` array and compares each string `t` to the first character in the `format` string. If a match is found, the corresponding function pointer `f` is returned.

The `_printf` function is a custom implementation of the `printf` function that takes a variable number of arguments. It first initializes a variable argument list `ap` using the `va_start` macro, and initializes a variable `counter` to keep track of the number of characters printed.

The function then iterates through each character in the `format` string. If the character is not a `%` symbol, it is printed using the `_putchar` function and `counter` is incremented. If the character is a `%` symbol, the function checks whether the next character is also a `%` symbol. If it is, the `%` symbol is printed and `counter` is incremented. If the next character is not a `%` symbol, the `check_format` function is called with a pointer to the next character in `format`. If a valid function pointer is returned, the function pointer is called with the variable argument list `ap`, and the value



