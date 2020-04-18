## C - File I/O

## Learning Objectives

- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call

## Requirements

- All files compiled on Ubuntu 14.04 LTS
- Programs and functions compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- Code uses the Betty style.
- Not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- The prototypes of all functions are included in your header file called lists.h
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
