# Bitwise Manipulation In C #

Bitwise operations is where the operators AND, OR, NOT performs on strings of eight bits bit by bit

## Examples of bitwise operators ##

1. & - bitwise AND
2. | - bitwise inclusive OR
3. ^ - bitwise XOR, exclusive OR
4.  >>  right shift
5. << - lesft shift
6. ~ - bitwise NOT


### Bitwise AND ###

|  a  |  b  | a&b |
|:--- |:---:| ---:|
|  0  |  0  |  0  | 
|  0  |  1  |  0  |
|  1  |  0  |  0  |
|  1  |  1  |  1  |

### Bitwise OR ###

|  a  |  b  | a OR b |
|:--- |:---:| ------:|
|  0  |  0  |  0     |
|  0  |  1  |  1     |
|  1  |  0  |  1     |
|  1  |  1  |  1     |

### Bitwise XOR ###

|  a  |  b  | a^b |
|:--- |:---:| ---:|
|  0  |  0  |  0  |
|  0  |  1  |  1  |
|  1  |  0  |  1  |
|  1  |  1  |  0  |

### Bitwise NOT ###

|  a  |  ~a |
|:---:| ---:|
|  0  |  1  |
|  1  |  0  |

# ALX Projects #
## Requirements ##
### General ###
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks ##
- Task 0:  Write a function that converts a binary number to an unsigned int
- Task 1: Write a function that prints the binary representation of a number.
- Task 2: Write a function that returns the value of a bit at a given index.
- Task 3: Write a function that sets the value of a bit to 1 at a given index.
- Task 4: Write a function that sets the value of a bit to 0 at a given index.
- Task 5: Write a function that returns the number of bits you would need to flip to get from one number to another.

## Advanced Tasks ##
- Task 100: Write a function that checks the endianness.
- Task 101: Find the password for this program.


## Author ##
Stephen Otieno Okok - Stephokok@github.com

