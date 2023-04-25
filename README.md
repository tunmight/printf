# Printf 

## Group Project

### Collaborators:
- <a href="https://github.com/Tunmight">Tunmight</a>
- <a href="https://github.com/GreenyNg">The Graphical Greeny</a>

## Files

### <a href="https://github.com/tunmight/printf/blob/master/main.h">main.h</a>
Header file

### <a href="https://github.com/tunmight/printf/blob/master/_printf.c">_printf.c</a>
This code defines two functions: `check_format` and `_printf`. `check_format` takes a string argument `format`, which represents a possible valid format specifier for printf. It returns a pointer to a function that matches the format specifier, or `NULL` if no matching function is found.

The `check_format` function first initializes an array of structures called `p`. Each structure has two members: a string `t` representing a format specifier and a function pointer `f` that corresponds to the matching function.

Next, the function iterates through the `p` array and compares each string `t` to the first character in the `format` string. If a match is found, the corresponding function pointer `f` is returned.

The `_printf` function is a custom implementation of the `printf` function that takes a variable number of arguments. It first initializes a variable argument list `ap` using the `va_start` macro, and initializes a variable `counter` to keep track of the number of characters printed.

The function then iterates through each character in the `format` string. If the character is not a `%` symbol, it is printed using the `_putchar` function and `counter` is incremented. If the character is a `%` symbol, the function checks whether the next character is also a `%` symbol. If it is, the `%` symbol is printed and `counter` is incremented. If the next character is not a `%` symbol, the `check_format` function is called with a pointer to the next character in `format`. If a valid function pointer is returned, the function pointer is called with the variable argument list `ap`, and the value

### <a href="https://github.com/tunmight/printf/blob/master/test/main.c">main.c</a>
This code defines a `main` function that tests a custom implementation of the `printf` function, named `_printf`. 

The code includes standard libraries `limits.h` and `stdio.h` as well as a header file `main.h`. The `main` function begins by declaring some variables: `len` and `len2` of type `int`, `ui` of type `unsigned int`, and `addr` of type `void *`.

The `main` function then assigns values to these variables by calling `_printf`, `printf`, and by performing some type conversions. Finally, the function calls `_printf` and `printf` again with various format specifiers and arguments.
The purpose of the program is to test the functionality of the `_printf` function and to compare its output to that of the standard `printf` function.

### <a href="https://github.com/tunmight/printf/blob/master/_putchar.c">_putchar.c</a>
This code defines a function called `_putchar` which takes a single character `c` as input and writes it to the standard output. 

The function uses the `write()` system call from the `unistd.h` library to write the character to file descriptor 1 (which represents the standard output). The `write()` function returns the number of bytes written to the output stream. 

The function returns the value returned by the `write()` function, which is 1 on success, or -1 on error.

### <a href="https://github.com/tunmight/printf/blob/master/printc.c">printc.c</a>
The given code defines a function called `print_c` that takes a variable argument list (`va_list`) as an argument, and prints a single character that is passed as an argument.

The `va_arg` macro is used to extract the next argument from the variable argument list. In this case, it is used to extract a character (of type `char`) from the argument list and store it in the `character` variable.

The function then uses the `_putchar` function (presumably defined elsewhere in the code) to print the character to the standard output.

Finally, the function returns the value 1, which is meant to indicate success.

Overall, this code appears to be a simple implementation of a function that prints a single character using variable arguments.

### <a href="https://github.com/tunmight/printf/blob/master/prints.c">prints.c</a>


This code defines a function named `print_s` that prints a string passed as an argument to the function. The string is retrieved using the `va_arg` macro from the `stdarg.h` header, which allows variable arguments to be passed to a function.

The function takes a single argument of type `va_list`, which is a type that represents the list of variable arguments. The string to be printed is obtained from this list using the `va_arg` macro, which returns the next argument of the specified type in the list.

The function then iterates through the string character by character using a `while` loop and prints each character using the `_putchar` function. The `_putchar` function is not shown in this code snippet, but it is assumed to be defined elsewhere.

If the string passed to the function is `NULL`, the function sets the string to `"(null)"` before iterating and printing the characters of the string.

Finally, the function returns the number of characters printed as an integer.

### <a href="https://github.com/tunmight/printf/blob/master/printd.c">printd.c</a>


This is a C function named `print_d` that takes a variable argument list (`va_list`) and prints an integer in decimal format. The function returns the number of digits printed.

The function first declares an array `a` of 10 integers, and initializes variables `j`, `m`, `n`, `sum`, and `counter`. It then retrieves an integer argument from the variable argument list using the `va_arg()` function.

If the integer is negative, the function multiplies it by -1 and prints a '-' character to represent the negative sign. It then increments the `counter` variable to account for the extra character printed.

The function then uses a loop to fill the array `a` with the digits of the integer, starting with the most significant digit and ending with the least significant digit. The loop uses integer division and modulo operators to extract each digit from the integer.

Finally, the function uses another loop to print the digits in the array `a`, starting with the first non-zero digit and ending with the least significant digit. The loop uses the `_putchar()` function to print each digit as a character and increments the `counter` variable to keep track of the number of digits printed.

The function returns the value of the `counter` variable, indicating the number of digits printed.

### <a href="https://github.com/tunmight/printf/blob/master/printi.c">printi.c</a>


This code defines a function `print_i` which takes a variable argument list `va_list i` as its parameter and returns an integer value indicating the number of digits printed. The function is defined in the `main.h` header file and uses the `_putchar()` function to print characters to the console.

The function starts by declaring an integer array `a` with a length of 10 and initializing some variables: `j` to 1, `m` to 1000000000, `n` to 0, `sum` to 0, and `counter` to 0.

The `n` variable is then assigned the value of the first argument in the variable argument list using the `va_arg()` function. If `n` is less than zero, the function multiplies it by -1, prints a "-" character to the console using the `_putchar()` function, and increments `counter` by 1.

The next block of code uses a loop to populate the integer array `a` with the digits of the integer `n` starting from the highest place value and working down to the lowest. The loop divides `m` by 10 on each iteration to move to the next place value and assigns the corresponding digit to the current position in the `a` array.

The final block of code uses another loop to print the digits stored in the `a` array to the console using the `_putchar()` function. It only prints digits once a non-zero digit has been encountered, and it increments the `counter` variable for each digit printed.

The function then returns the `counter` value. Overall, this code defines a function to print an integer value to the console using the `_putchar()` function, and it can handle negative values and numbers with up to 10 digits.

### <a href="https://github.com/tunmight/printf/blob/master/printb.c">printb.c</a>
This code defines a function called `print_b` which takes a variable argument list (va_list) as input and returns an integer value. 

The purpose of this function is to print an unsigned integer in binary notation. The function uses a simple algorithm to convert the input value to binary, and then prints each binary digit one by one. The number of printed digits is returned as the output of the function.

The function starts by declaring several unsigned integer variables `n`, `m`, `j` and `sum`, and an array `a` of 32 integers. It then initializes `m` to the maximum 32-bit unsigned integer value, which is represented by the constant `2147483648`. It also initializes `j` and `sum` to 1 and 0, respectively, and `counter` to 0.

The function then extracts the next argument from the variable argument list using `va_arg` macro and assigns it to `n`.

Next, the function uses a loop to convert `n` into its binary representation, storing each binary digit in the array `a`. The loop runs for 32 iterations, each time shifting `m` right by one bit and dividing `n` by `m` to get the binary digit at the corresponding position. The binary digit is then stored in `a[j]` using the modulo operator.

After the conversion to binary, the function uses another loop to print the binary digits in reverse order. It starts by summing up the values in `a`, and then checks if the sum is non-zero or if it has reached the last binary digit (`j==31`). If either of these conditions is true, the function prints the binary digit at `a[j]` as a character by adding '0' to it and calling the `_putchar` function to output it to the console. It also increments `counter` each time a digit is printed.

Finally, the function returns `counter` as the number of binary digits printed.

### <a href="https://github.com/tunmight/printf/blob/master/printu.c">printu.c</a>
This code defines a function named `print_u` that takes a single argument of type `va_list` and returns an integer value. The function prints an unsigned integer value passed as an argument to the function using the `_putchar()` function.

The function first declares an array `a` of 10 unsigned integers and initializes some variables `j`, `m`, `n`, `sum` and `counter`. The value of `n` is obtained by using `va_arg()` function that takes a `va_list` as argument and returns the next argument in the list with the specified type.

The function then performs some operations on the value of `n` to obtain each individual digit of the number and stores them in the array `a`. It then iterates over the array to print each digit one by one using `_putchar()` function. The function also keeps track of the number of digits printed by updating the `counter` variable and returns it as the final output of the function.

### <a href="">printo.c</a>
<!--
to compare its output to that of the standard `printf` function.The purpose of the program is to test the functionality of the `_printf` function and to compare its output to that of the standard `printf`The purpose of the program is to test the functionality of the `_printf` function and to compare its output to that of the standardThe purpose of the program is to test the functionality of the `_printf` function and to compare its output to that of theThe purpose of the program is to test the functionality of the `_printf` function and to compare its output to that ofThe purpose of the program is to test the functionality of the `_printf` function and to compare its output to thatThe purpose of the program is to test the functionality of the `_printf` function and to compare its output toThe purpose of the program is to test the functionality of the `_printf` function and to compare its outputThe purpose of the program is to test the functionality of the `_printf` function and to compare itsThe purpose of the program is to test the functionality of the `_printf` function and to compareThe purpose of the program is to test the functionality of the `_printf` function and toThe purpose of the program is to test the functionality of the `_printf` function andThe purpose of the program is to test the functionality of the `_printf` functionThe purpose of the program is to test the functionality of the `_printf`The purpose of the program is to test the functionality of the `_print-->
