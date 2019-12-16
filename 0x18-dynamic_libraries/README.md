## The following project covers:

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

## Requirements

# C

- All files compiled on Ubuntu 14.04 LTS
- Programs and functions compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- Code uses the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables
- No more than 5 functions per file
- No use of the standard library. Any use of functions like printf, puts, etc…
- _putchar is allowed
- The prototypes of all functions and the prototype of the function _putchar included in the header file called holberton.h

# Bash

- All scripts tested on Ubuntu 14.04 LTS

## Tasks

0. Create the dynamic library libholberton.so containing all the functions listed in the problem.
1. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
