# FindRoots
FindRoots: A C++ command-line application that calculates the real roots of a quadratic polynomial ax^2 + bx + c. This project includes the source code, CMake configuration for building, and detailed instructions for usage and compilation. Ideal for understanding the implementation of the quadratic formula without external libraries.

## Usage

The program is executed from the command line as follows:
findroots(.exe) a b c
Where `a`, `b`, and `c` are the coefficients of the polynomial.

## Examples

### Example 1
findroots 1 -3 2<br />
Output:<br />
{2, 1}<br />

### Example 2
findroots 1 2 1<br />
Output:<br />
{-1}

### Example 3
findroots 1 0 1<br />
Output:<br />
{}<br />


## Compilation

To compile this program, you need to have `CMake` and a C++ compiler installed. Follow these steps:

1. Clone the repository:

   ```sh
   git clone <URL of the repository>
   cd findroots

2. Create a build directory and navigate to it:
   ```sh
   mkdir build
   cd build
3. Run CMake and compile the program:
   ```sh
   cmake ..
   make
4. The executable findroots will be generated in the build directory.


### Using MinGW

1. Install MinGW:

   Download and install MinGW from [MinGW-w64](https://www.mingw-w64.org/) and ensure the `bin` directory (e.g., `C:\mingw-w64\bin`) is added to your system's PATH.

2. Install CMake:

   Download and install CMake from [cmake.org](https://cmake.org/download/) and ensure it is added to your system's PATH.

3. Clone the repository:

   Open Command Prompt and run:
   ```sh
   git clone <URL of the repository>
   cd findroots



   
   
4. The executable findroots will be generated in the build directory.

## Notes
The program only calculates real roots. If the discriminant (b^2 - 4ac) is negative, the program will output {}.
No external libraries are used for root calculation. The quadratic formula is implemented manually.

## File Descriptions
findroots.cpp: The main source file containing the implementation of the root-finding algorithm.
CMakeLists.txt: The CMake configuration file for building the project.
README.md: This file, which contains instructions and information about the project.

## Implementation Details
The program calculates the roots of the quadratic polynomial using the quadratic formula
![image](https://github.com/ClaudioGlez21/FindRoots/assets/127899820/1dfb176c-ff8f-474e-b31a-11e294adfe06)
