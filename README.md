[![Bash Shell](https://badges.frapsoft.com/bash/v1/bash.png?v=103)](https://github.com/ellerbrock/open-source-badges/)

# _printf Function
## Creating our own C printf function
This project is about creating a simulation of the original printf function. The printf function is used for printing the output. It returns the number of characters that are printed. If there is some error then it returns a negative value.

## :heavy_check_mark: Requirements 

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions should be included in your header file called holberton.h

## :bookmark_tabs: Synopsis:
```bash
int _printf(const char *format, ...);
```
* *format* is a character string. The format string is composed of zero or more directives and conversion specifiers:

Specifier | Input example | Output example
| --- | --- | --- |
%c | "Printing a char: [%c]\n", 'X' | Printing a char: [X]
%s | "Printing a string: [%s]\n", "Hello, World" | Printing a string: [Hello, World]
%d or %i | "Printing a number: [%i]\n", 386 | Printing a number: [386]
%% | "Printing a percent sign: [%%]\n", % | Printing a percent sign: [%]

*Note*: custom specifiers can be added as needed.

* (...) the ellipsis sign represents the variable number of input arguments.

## :gear: Compilation
All the code files must be compiled as shown:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```
After compilation the executable file should be run ```./example.out```.

## :computer: Downloading the repository
The repository should be cloned as shown:
```bash
git clone https://github.com/emmanavarro/printf.git
```

## :link: Resources
 - [Secrets of printf](https://www.cypress.com/file/54761/download)

## :dancing_women: Authors
* Nathaly Sotomayor Ampudia | [Github](https://github.com/nathsotomayor)
* Emma Navarro Millán | [Github](https://github.com/emmanavarro)

## Made with :heart: in
<img src="https://www.holbertonschool.com/holberton-logo.png"
     alt="Flow chart"
     style="float: left; margin-right: 10px;">

__Holberton School - Foundations - Low-level programming & Algorithm__

__March, 2020.__
