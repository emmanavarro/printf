# _printf Function
## Creating our own C printf function
This project is about creating a simulation of the original printf function. The printf function is used for printing the output. It returns the number of characters that are printed. If there is some error then it returns a negative value.

## Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line.
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions should be included in your header file called holberton.h

##### Synopsis:
```bash
int _printf(const char *format, ...);
```
* *format* is a character string. The format string is composed of zero or more directives and conversion specifiers:
* %c, %s, %d, %i, %%, (custom specifiers can be added).

* (...) the ellipsis sign represents the variable number of input arguments.

## Compilation
All the code files must be compiled as shown:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

## Resources

 - [Secrets of printf](https://www.cypress.com/file/54761/download)

## Authors
* Nathaly Sotomayor Ampudia | [Github] (https://github.com/nathsotomayor)
* Emma Navarro Millán | [Github] (https://github.com/emmanavarro)

## License
Project for: [Holberton School](https://www.holbertonschool.com/)
