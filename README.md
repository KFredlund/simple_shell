# :shell: simple\_shell :shell:

## UNIX command line interpreter

### **Usage**
```
 simple_shell [command] [argv[1]] [argv[2]]...
```

### Flowchart
![flowchart image](simpleshell_flowchart.pdf)

### Files

File | Description
-------|----------------------
simple\_shell.c | Prints a prompt and waits for user to input a command and arguments, which it reads, parses and then executes.

##### Helper Functions

Directory | Description
-------|----------------------
memory\_functions | Collection of memory functions
string\_functions | Collection of string functions
variadic\_functions | Collection of variadic functions
helper\_functions | Misc. collection functions built in previous projects

1. Memory Functions
- [x] \_calloc - A function that allocates memory
- [x] \_realloc - A function that reallocates memory
- [x] \_strlen - A function that finds the length of a string
2. String Functions
- [x] \_strchr - A function that locates a character in a string
- [x] \_strcat - A function that concatenates two strings
- [x] \_strncat - A function that concatenates two strings
- [x] \_strcmp - A function that compares two strings
- [x] \_strcpy - A function that copies a string to a buffer
- [x] \_strncpy - A function that copies n bytes of src to dest string
- [x] \_strspn - A function that finds the length of a prefix string
- [x] rev_string - A function that reverses a string
- [x] \_atoi - A function that converts a string into an integer
3. Variadic Functions
- [x] print_all - A function that prints anything
- [x] print_numbers - A function that prints numbers and a new line
- [x] print_strings - A function that prints a string and a new line
- [x] sum_them_all - A function that finds the sum of all parameters
4. Miscellaneous Helper Functions
- [x] list_len - A function that returns the number of nodes
- [x] print_list - A function that prints elements of a list
- [x] free_list - A function that frees a list
- [x] add_node - A function that adds a new node to the beginning of a list
- [x] add_node_end - A function that adds a new node to the end of a list
- [x] wildcmp - A function that compares two strings
- [x] array_iterator - A function that executes a function given as a parameter
- [x] \_puts_recursion - A function that prints a string and a new line
- [x] \_sqrt_recursion - A function that returns the square root of a number
- [x] print_base16 - A function that prints base16


##### Accessory Files

File | Description
-------|----------------------
shell.c | Main function for simple shell
\_getline.c | File for \_getline function
\_strtok.c | File for \_strtok function
allocation_help.c | File for memory allocation functions
errorsandexits.c | File for error messages and exits
createstokens.c | File for handling token parsing
environment_help.c | File for setting and unsetting env
holberton.h | Header file for project
man\_1\_simple\_shell | simple\_shell manual page
README.md | Project description and information
AUTHORS | File for creators of project


#### Return value
Simple\_shell will return the number of bytes read from standard inpout

#### Examples
```
$ cd		Output: Moved to $HOME

$ pwd		Output: Name of current working directory

$ exit		Output: root@ubuntu:/home/
```

#### Authors
[Kathleen McKiernan](https://github.com/KathleenRMcK) & [Kati Fredlund](https://github.com/KFredlund)

## A Kati<sup>2</sup>\(e\) Project
