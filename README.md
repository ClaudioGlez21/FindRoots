# FindRoots

## Overview

This project is a C++ application that calculates the real roots of a quadratic polynomial of the form `a x^2 + b x + c`. It uses the standard quadratic formula to find the roots and prints them to the terminal.

## How It Works

The code calculates the roots of the quadratic polynomial using the discriminant (`b^2 - 4ac`).
![image](https://github.com/ClaudioGlez21/FindRoots/assets/127899820/9b2a4364-11e5-4fa2-b8e8-c05570a79ef4)
Depending on the value of the discriminant, the program determines the nature and number of roots:
- If the discriminant is greater than 0, there are two distinct real roots.
- If the discriminant is equal to 0, there is one real double root.
- If the discriminant is less than 0, there are no real roots (complex roots are ignored).

## File Descriptions
`main.cpp`: The main source file containing the implementation of the root-finding algorithm.<br />
`CMakeLists.txt`: The CMake configuration file for building the project.<br />
`README.md`: This file, which contains instructions and information about the project.

## Usage
The program is executed from the command line as follows:
`findroots.exe a b c`
Where `a`, `b`, and `c` are the coefficients of the polynomial.

## Examples

### Example 1 (two distinct real roots)
`findroots 1 -3 2`<br />
Output:<br />
`{2, 1}`<br />

### Example 2 (one real double root)
`findroots 1 2 1`<br />
Output:<br />
`{-1}`

### Example 3 (no real roots)
`findroots 1 0 1`<br />
Output:<br />
`{}`<br />


## Compilation
To compile and run this project, you need to have the following software installed:

- CMake (version 3.10 or higher)
- A C++ compiler (e.g., GCC on Linux or MSVC on Windows)

1. Clone this repository:

   ```sh
   git clone https://github.com/ClaudioGlez21/FindRoots.git
   cd FindRoots

2. Create a build directory and navigate to it:
   ```sh
   mkdir build
   cd build

3. Run CMake and compile the program:
   ```sh
   cmake ..
   cmake --build .

4. The executable `findroots.exe` will be generated in the build directory.
   
### Run the program
After compiling the project, you can run the program from the build directory:

`findroots.exe 1 -3 2`

This will execute the program with the coefficients `a = 1`, `b = -3`, and `c = 2`. The program will calculate the roots of the polynomial \(x^2 - 3x + 2\) and print them to the terminal.



