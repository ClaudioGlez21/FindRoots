# FindRoots
FindRoots: A C++ command-line application that calculates the real roots of a quadratic polynomial ax^2 + bx + c. This project includes the source code, CMake configuration for building, and detailed instructions for usage and compilation. Ideal for understanding the implementation of the quadratic formula without external libraries.

## File Descriptions
findroots.cpp: The main source file containing the implementation of the root-finding algorithm.<br />
CMakeLists.txt: The CMake configuration file for building the project.<br />
README.md: This file, which contains instructions and information about the project.

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

1. Install Visual Studio:

Download and install Visual Studio with the "Desktop development with C++" workload.

Install CMake:

2. Download and install CMake from cmake.org and ensure it is added to your system's PATH.

3. Clone this repository:

   ```sh
   git clone https://github.com/ClaudioGlez21/FindRoots.git
   cd FindRoots

4. Create a build directory and navigate to it:
   ```sh
   mkdir build
   cd build
5. Run CMake and compile the program:
   ```sh
   cmake ..
   cmake --build .
6. The executable findroots will be generated in the build directory.
   
### Run the program
After compiling the project, you can run the program from the build directory:

findroots.exe 1 -3 2


This will execute the program with the coefficients `a = 1`, `b = -3`, and `c = 2`. The program will calculate the roots of the polynomial \(x^2 - 3x + 2\) and print them to the terminal.




   
## Notes
The program only calculates real roots. If the discriminant (b^2 - 4ac) is negative, the program will output {}.
No external libraries are used for root calculation. The quadratic formula is implemented manually.



## Implementation Details
The program calculates the roots of the quadratic polynomial using the quadratic formula:
![image](https://github.com/ClaudioGlez21/FindRoots/assets/127899820/9b2a4364-11e5-4fa2-b8e8-c05570a79ef4)

### Depending on the value of the discriminant (b^2 - 4ac):

If the discriminant is greater than 0, the polynomial has two distinct real roots.
If the discriminant is equal to 0, the polynomial has one real double root.
If the discriminant is less than 0, the polynomial has no real roots, and the program will output {}.

