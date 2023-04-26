# Printf Group Project

Welcome to our collaborative project between NourMellal and MAVERICK500 to create our own implementation of the printf function in C programming language.

## Project Overview

The goal of this project is to create a custom implementation of the printf function in C programming language. The printf function is used to print formatted output to the standard output stream. Our implementation of printf should support all the conversion specifiers and flags that are supported by the standard printf function.

## Project Structure

Our project contains the following files:

- `README.md`: this file you are currently reading.
- `_printf.c`: contains the main implementation of our printf function.
- `_printf_37.c`: contains the implementation of the conversion specifier %.
- `_print_nums.c`: contains the implementation of the conversion specifiers d, i, u, o, x, and X.
- `consol.c`: contains the main function for testing our printf function.
- `flags.c`: contains the implementation of the flags - and +.
- `main.h`: header file that contains all the function prototypes and necessary libraries.
- `print_b-p.c`: contains the implementation of the conversion specifiers b and p.
- `print_exclusive.c`: contains the implementation of the conversion specifiers e, E, and f.
- `print_srev.c`: contains the implementation of the conversion specifier r.
- `printf_char.c`: contains the implementation of the conversion specifier c.
- `printf_string.c`: contains the implementation of the conversion specifier s.
- `printf_tools.c`: contains utility functions used by our printf function.
- `rot13.c`: contains the implementation of the rot13 function used by the conversion specifier R.

## Getting Started

To get started with our project, follow these steps:

1. Clone the project repository to your local machine using the following command:

   `````
   git clone https://github.com/NourMellal/printf.git
   ```

2. Change into the project directory:

   ````
   cd printf
   ````

3. Compile the project using the following command:

   ````
   gcc -Wall -Werror -Wextra -pedantic *.c -o printf
   ````

4. Run the project:

   ````
   ./printf
   ````

## Contribution Guidelines

We welcome contributions to our project! If you would like to contribute, please follow these guidelines:

1. Fork the project repository to your own GitHub account.

2. Clone your forked repository to your local machine.

3. Create a new branch for your changes:

   ````
   git checkout -b my-feature-branch
   ````

4. Make your changes to the project code.

5. Commit your changes with a descriptive commit message:

   ````
   git commit -m "Add new feature"
   ````

6. Push your changes to your forked repository:

   ````
   git push origin my-feature-branch
   ````

7. Create a pull request from your forked repository to our main repository.

## Conclusion

We hope you find our implementation of printf useful and informative. If you have any questions or feedback, please feel free to contact us. Thank you for your interest and contributions to our project!
