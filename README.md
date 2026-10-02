# Dynamic Matrix Using malloc() in C

## Project Description

A simple C program that demonstrates dynamic memory allocation for a two-dimensional matrix. The program accepts the number of rows and columns from the user, allocates memory using `malloc()`, stores matrix elements, and displays the matrix.

## Features

- Accept matrix size from the user
- Dynamically allocate rows and columns
- Store matrix elements
- Display the dynamic matrix
- Check memory allocation
- Release allocated memory using `free()`

## Technologies Used

- C
- Dynamic Memory Allocation
- `malloc()`
- `free()`
- Pointers
- Two-Dimensional Arrays

## How to Run

1. Create a file named `dynamic_matrix_malloc.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.

Example using GCC:

```bash
gcc dynamic_matrix_malloc.c -o dynamic_matrix_malloc
./dynamic_matrix_malloc

===== Dynamic Matrix Using malloc() =====
Enter number of rows: 2
Enter number of columns: 3

Enter matrix elements:
Element [1][1]: 10
Element [1][2]: 20
Element [1][3]: 30
Element [2][1]: 40
Element [2][2]: 50
Element [2][3]: 60

===== Dynamic Matrix =====
10 20 30
40 50 60

Memory released successfully.

Author

M.Likitha
