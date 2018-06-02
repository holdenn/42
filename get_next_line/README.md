# get_next_line

get_next_line is a function that reads line by line from a file descriptor

## Getting Started

- ```git clone``` this repo
- copy ```libft``` in the repo
- ```make libft```
- compile get_next_line.c with libft.a

## Running the tests

- adjust ```buffer_size``` in ```get_next_line.h``` (minimum 1), optimal ```BUFFER_SIZE``` depends on your system and the file size, usually it's a good bet to go with a power of 2 (ex: 512, 1024, ...)
- feed get_next_line with any file
- good stress test is to pipe ```/dev/urandom``` in a file for a while
